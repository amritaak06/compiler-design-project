%{
    #define YYSTYPE char*
    #include "sym_tab.c"
    #include "parser.tab.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    int scope=0;
    int type=-1;
    char* vval="~";
    int vtype = -1;  
    int condition_result = 0;  
    double expr1_val = 0.0;    
    double expr2_val = 0.0;
    int skip_execution = 0;
    void yyerror(char* s);
    int yylex();
    extern int yylineno;
    symbol *global_p = NULL; 
%}

%token T_INT T_CHAR T_DOUBLE T_WHILE T_INC T_DEC T_OROR T_ANDAND T_EQCOMP T_NOTEQUAL T_GREATEREQ T_LESSEREQ T_LEFTSHIFT T_RIGHTSHIFT T_PRINTLN T_STRING T_FLOAT T_BOOLEAN T_IF T_ELSE T_STRLITERAL T_DO T_INCLUDE T_HEADER T_MAIN T_ID T_NUM T_FOR



%start START

%%
START : PROG { printf("Valid syntax\n"); YYACCEPT; }    
      ; 
      
PROG : MAIN PROG                
     | DECLR ';' PROG                 
     | ASSGN ';' PROG     
     |                     
     ;

DECLR : TYPE LISTVAR 
      ;    

LISTVAR : LISTVAR ',' VAR 
        | VAR
        ;

VAR : T_ID '=' EXPR {
        if(!skip_execution) {
            if(check_symbol_table($1,scope))  
                yyerror($1);
            else {
                insert_into_table($1,type,yylineno,scope);
                insert_value_to_name($1,vval,scope);
                type=-1;
                vval="~";
            }
        }
    }
    | T_ID {
        if(!skip_execution) {
            if(check_symbol_table($1,scope))
                yyerror($1);
            insert_into_table($1,type,yylineno,scope);
        }
    }
    | T_ID ARRAY_DECL {
        if(!skip_execution) {
            if(check_symbol_table($1,scope))  
                yyerror($1);
            else {
                insert_into_table($1, type, yylineno, scope);
                symbol *s = get_symbol($1, scope);
                if (strcmp(vval, "~") != 0) {
                    insert_value_to_name($1, vval, scope);
                }
                type = -1;
                vval = "~";
            }
        }
    }
    ;

ARRAY_DECL : ARRAY_DIM ARRAY_INIT
           | ARRAY_DIM
           | ARRAY_INIT
           ;

ARRAY_DIM : '[' T_NUM ']' ARRAY_DIM
          | '[' T_NUM ']' { 
              char str[32];
              sprintf(str, "%d", atoi($2));
              $$ = strdup(str);
            }
          ;

ARRAY_INIT : '=' '{' ARRAY_LIST '}'
           ;

ARRAY_LIST : ARRAY_LIST ',' EXPR
           | EXPR
           ;

TYPE : T_INT {type=INT;}
     | T_FLOAT {type=FLOAT;}
     | T_DOUBLE {type=DOUBLE;}
     | T_CHAR {type=CHAR;}
     ;

ASSGN : T_ID { 
            if(!skip_execution) {  
                global_p = get_symbol($1, scope);
                type = global_p == NULL ? -1 : global_p->type;
            }
        } '=' EXPR {
            if(!skip_execution) {  
                if(global_p == NULL) 
                    yyerror($1);
                else if(vtype != type && !(vtype == DOUBLE && type == FLOAT) && !(vtype == FLOAT && type == DOUBLE)) {
                    fprintf(stderr, "Type mismatch: Cannot assign type %d to type %d\n", vtype, type);
                    yyerror($1);
                }
                else {
                    insert_value_to_symbol(global_p, vval);
                }
                vval = "~";
                type = -1;
                global_p = NULL;
            }
        }
    | T_ID '[' EXPR ']' '=' EXPR {
            if(!skip_execution) {
                symbol *s = get_symbol($1, scope);
                if(s == NULL) {
                    fprintf(stderr, "%s is not declared\n", $1);
                    yyerror($1);
                }
                else {
                    // Handle array assignment
                    char index_str[32];
                    sprintf(index_str, "[%s]", $3);
                    char *new_val = malloc(strlen(s->val) + strlen(index_str) + strlen($6) + 1);
                    sprintf(new_val, "%s%s=%s", s->val, index_str, $6);
                    insert_value_to_symbol(s, new_val);
                    free(new_val);
                }
            }
        }
    ;

EXPR : EXPR REL_OP E {
        expr2_val = atof($3);
        switch($2[0]) {
            case '<':
                if (strlen($2) == 2)
                    condition_result = (expr1_val <= expr2_val);
                else
                    condition_result = (expr1_val < expr2_val);
                break;
            case '>':
                if (strlen($2) == 2)
                    condition_result = (expr1_val >= expr2_val);
                else
                    condition_result = (expr1_val > expr2_val);
                break;
            case '=':
                condition_result = (expr1_val == expr2_val);
                break;
            case '!':
                condition_result = (expr1_val != expr2_val);
                break;
        }
    }
    | E {
        vval = $1;
        expr1_val = atof($1);
    }
    ;
       
E : E '+' T { 
         if ( vtype == INT ) {
                sprintf( $$, "%d", ( atoi( $1 ) + atoi( $3 ) ) );
            } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                sprintf( $$, "%lf", ( atof( $1 ) + atof( $3 ) ) );
            } else {
                fprintf( stderr, "Operation %s not supported for type %d",
                         $2, vtype );
                yyerror( $$ );
                $$ = "~";
            }
        }  
  | E '-' T {  
            if ( vtype == INT ) {
                sprintf( $$, "%d", ( atoi( $1 ) - atoi( $3 ) ) );
            } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                sprintf( $$, "%lf", ( atof( $1 ) - atof( $3 ) ) );
            } else {
                fprintf( stderr, "Operation %s not supported for type %d",
                         $2, vtype );
                yyerror( $$ );
                $$ = "~";
            }
        }
  | T {$$=$1;}  
  ;
    
T : T '*' F { 
                 if ( vtype == INT ) {
                    sprintf( $$, "%d", ( atoi( $1 ) * atoi( $3 ) ) );
                } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                    sprintf( $$, "%lf", ( atof( $1 ) * atof( $3 ) ) );
                } else {
                    fprintf( stderr, "Operation %s not supported for type %d",
                             $2, vtype );
                    yyerror( $$ );
                    $$ = "~";
                }
            }  
  | T '/' F {  
                if ( vtype == INT ) {
                    sprintf( $$, "%d", ( atoi( $1 ) / atoi( $3 ) ) );
                } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                    sprintf( $$, "%lf", ( atof( $1 ) / atof( $3 ) ) );
                } else {
                    fprintf( stderr, "Operation %s not supported for type %d",
                             $2, vtype );
                    yyerror( $$ );
                    $$ = "~";
                }
            }  
  | F {$$=$1;}  
  ;

F : '(' EXPR ')'
  | T_ID {
            symbol *s=get_symbol($1,scope);
            if(s==NULL) {
                fprintf(stderr,"%s is not declared\n",$1);
                yyerror($1);
            }
            if(!strcmp(s->val,"~")) {
                fprintf(stderr,"%s is not initialized\n",$1);
                yyerror($1);
            }
            $$=strdup(s->val);
            vtype=s->type;
            if(vtype!=type&&type!=-1) {
                fprintf(stderr,"Cannot assign type %d to type %d\n",vtype,type);
                yyerror($1);
            }
         }
  | T_NUM {
        if(!skip_execution) {
            $$=strdup($1);
            vtype=get_type($1);
            if(vtype!=type && type!=-1 && !(vtype==DOUBLE && type==FLOAT) && !(vtype==FLOAT && type==DOUBLE)) {
                fprintf(stderr,"Cannot assign type %d to type %d\n", vtype, type );
                yyerror( $1 );
            }
	   if(type == -1) {
                condition_result = (atof($1) != 0);
            }
        }
    }
  | T_STRLITERAL {
                    $$=strdup($1);
                    vtype=1;
                    if(vtype!=type) {
                        fprintf(stderr,"Cannot assign char * to type %d\n",type);
                        yyerror( $1 );
                    }
                 }
  | INCREMENT
  ;

INCREMENT : T_INC T_ID {
                symbol *s=get_symbol($2,scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",$2);
                    yyerror($2);
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",$2);
                    yyerror($2);
                }
                char new_value[32];
                if(s->type==INT) {
                    int val = atoi(s->val) + 1;
                    sprintf(new_value,"%d",val);
                } else if(s->type==FLOAT || s->type==DOUBLE) {
                    double val = atof(s->val) + 1.0;
                    sprintf(new_value,"%lf",val);
                }
                insert_value_to_symbol(s,new_value);
                $$=strdup(new_value);
                vtype=s->type;
            }
  | T_DEC T_ID {
                symbol *s=get_symbol($2,scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",$2);
                    yyerror($2);
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",$2);
                    yyerror($2);
                }
                char new_value[32];
                if(s->type==INT) {
                    int val = atoi(s->val) - 1;
                    sprintf(new_value,"%d",val);
                } else if(s->type==FLOAT || s->type==DOUBLE) {
                    double val = atof(s->val) - 1.0;
                    sprintf(new_value,"%lf",val);
                }
                insert_value_to_symbol(s,new_value);
                $$=strdup(new_value);
                vtype=s->type;
            }
  | T_ID T_INC {
                symbol *s=get_symbol($1,scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",$1);
                    yyerror($1);
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",$1);
                    yyerror($1);
                }
                $$=strdup(s->val);
                char new_value[32];
                if(s->type==INT) {
                    int val = atoi(s->val) + 1;
                    sprintf(new_value,"%d",val);
                } else if(s->type==FLOAT || s->type==DOUBLE) {
                    double val = atof(s->val) + 1.0;
                    sprintf(new_value,"%lf",val);
                }
                insert_value_to_symbol(s,new_value);
                vtype=s->type;
            }
  | T_ID T_DEC {
                symbol *s=get_symbol($1,scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",$1);
                    yyerror($1);
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",$1);
                    yyerror($1);
                }
                $$=strdup(s->val);
                char new_value[32];
                if(s->type==INT) {
                    int val = atoi(s->val) - 1;
                    sprintf(new_value,"%d",val);
                } else if(s->type==FLOAT || s->type==DOUBLE) {
                    double val = atof(s->val) - 1.0;
                    sprintf(new_value,"%lf",val);
                }
                insert_value_to_symbol(s,new_value);
                vtype=s->type;
            }
  ;

REL_OP : T_LESSEREQ
       | T_GREATEREQ
       | '<'
       | '>'
       | T_EQCOMP
       | T_NOTEQUAL
       ;

MAIN : TYPE T_MAIN '(' EMPTY_LISTVAR ')' '{' {scope++;} STMT '}' {scope--;}
     ;

EMPTY_LISTVAR : LISTVAR
              |     
              ;

STMT : STMT_NO_BLOCK STMT
     | BLOCK STMT 
     | LOOP_STMT STMT
     |
     ;

STMT_NO_BLOCK : DECLR ';'
              | ASSGN ';'
              | IF_STMT
              ;

IF_STMT : T_IF '(' COND ')' {
            if(!condition_result) {
                skip_execution = 1;
            }
        } '{' STMT '}' {
            skip_execution = 0;
        } ELSE_PART
        ;

ELSE_PART : T_ELSE {
            if(condition_result) {
                skip_execution = 1;
            }
        } '{' STMT '}' {
            skip_execution = 0;
        }
        |
        ;

LOOP_STMT : WHILE_LOOP
          | DO_WHILE_LOOP
          | FOR_LOOP
          ;

WHILE_LOOP : T_WHILE '(' COND ')' {
               if(!condition_result) {
                   skip_execution = 1;
               }
           } BLOCK {
               skip_execution = 0;
           }
           ;

DO_WHILE_LOOP : T_DO BLOCK T_WHILE '(' COND ')' ';'


FOR_LOOP : T_FOR '(' FOR_INIT ';' COND ';' FOR_UPDATE ')' {
             if(!condition_result) {
                 skip_execution = 1;
             }
         } BLOCK {
             skip_execution = 0;
         }
         ;

FOR_INIT : DECLR
         | ASSGN
         | 
         ;

FOR_UPDATE : INCREMENT
           | ASSGN
           | 
           ;

BLOCK : '{' {scope++;} STMT '}' {scope--;}
      ;

COND : EXPR 
     | ASSGN
     ;

%%

void yyerror(char* s)
{
    printf("Error :%s at %d \n",s,yylineno);
}

int main(int argc,char* argv[])
{
    t=allocate_space_for_table();
    yyparse();
    display_symbol_table();
    return 0;
}