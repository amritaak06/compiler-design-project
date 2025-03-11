#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sym_tab.h"


table* allocate_space_for_table()
{
    /*
        allocate space for table pointer structure eg (t_name)* t
        initialise head variable eg t->head
        return pointer to table on success, NULL on failure
    */

    table *t = ( table * ) malloc( sizeof( table ) * 1 );
    if ( t != NULL ) {
        t->head = NULL;
    }

    return t;
}

symbol* allocate_space_for_table_entry( const char *name, int type, int lineno,
                                        int scope)
{
    /*
        allocate space for entry pointer structure eg (s_name)* s
        initialise all struct variables
        return pointer to symbol on success, NULL on failure
    */
    symbol *s = ( symbol * ) malloc( sizeof( symbol ) * 1 );
    if ( s != NULL ) {
        s->name = ( char * ) malloc( sizeof( char ) * ( strlen( name ) + 1 ) );
        strcpy( s->name, name );
        s->size = size_type_map[type]; 
        s->type = type;
        s->line = lineno;
        s->scope = scope;
        s->val = ( char * ) malloc( sizeof( char ) * 32 ); // allocate 32 bytes
                                                           // realloc if needed later
        strcpy( s->val, "~" );  // strcpy copies null terminator from second arg
    }

    return s;
}

int insert_into_table( const char *name, int type, int lineno, int scope )
{
    /*
        check if table is empty or not using the struct table pointer
        else traverse to the end of the table and insert the entry
        returns 1 on error, 0 on success
    */

    symbol *s = allocate_space_for_table_entry( name, type, lineno, scope );
    if ( s == NULL ) {
        fprintf( stderr, "malloc failed for symbol %s\n", name);
        return 1;
    }
    if ( t->head == NULL ) {
        t->head = s;
    } else {
        symbol *cur = t->head;
        while ( cur != NULL ) {
            if ( !strcmp( cur->name, name ) &&  cur->scope == scope ) {
                fprintf( stderr, "%s cannot be redeclared in scope\n", name );
                free( s->name );
                free( s->val );
                free( s );
                return 1;
            }
            if ( cur->next == NULL) {
                break;
            }
            cur = cur->next;
        }
        cur->next = s;
    }

    return 0;
}

symbol* check_symbol_table( const char *name, int scope )
{
    /*
        check if table is empty and return a value like 0
        else traverse the table
        if entry is found returns a pointer to symbol
        if not returns NULL
    */
    if ( t->head == NULL ) {
        return NULL;
    }
    symbol *cur = t->head;
    while ( cur != NULL ) {
        if ( !strcmp( cur->name, name ) && cur->scope == scope ) {
            return cur;
        }
        cur = cur->next;
    }

    return cur;
}


int insert_value_to_name( const char *name, const char *val, int scope )
{
    /*
        if value is default value return back
        check if table is empty
        else traverse the table and find the name
        insert value into the entry structure
        returns 1 on error, 0 on success

        NOTE:   you can add a parameter lineno, to track the latest line the symbol
                was updated at
        NOTE:   we assume that the maximum value length is 32 bytes; if you want, you
                can check strlen( val ) and realloc as needed.
    */
    if ( !strcmp( val, "~" ) ) {
        return 1;
    }

    symbol *cur = t->head, *prev_scope = NULL;
    while ( cur != NULL ) {
        if ( !strcmp( cur->name, name ) ) {
            // we have found a symbol with same name
            if ( cur->scope == scope ) {
                // we have found the exact match, update and return
                strncpy( cur->val, val, 32 );
                return 0;
            } else if ( cur->scope < scope ) {
                // we have found a match in the previous scope
                // update prev_scope to track the innermost scope
                // NOTE:    due to the way we have implemented scope in this lab,
                //          there are chances that prev_scope will point to an
                //          incorrect entry.
                //          Eg: { -> scope 1
                //                  int x;
                //                  { -> scope 2a
                //                      int x;
                //                  }
                //                  { -> scope 2b
                //                      x; -> should point to x in scope 1 but will 
                //                            point to x in scope 2a
                //                  }
                //               }
                //          to handle such cases, we would need to delete symbol
                //          table entries whenever declarations go out of scope
                prev_scope = cur;
            }
        }
        cur = cur->next;
    }

    // at this point, cur is NULL and we have not found an exact match
    // update the innermost scope and return
    if ( prev_scope != NULL ) {
        strncpy( prev_scope->val, val, 32 );
    }

    // at this point, both cur and prev_scope are NULL
    // there is no declaration that matches the name

    fprintf( stderr, "%s has not been declared\n", name );
    return 1;
}

symbol* get_symbol( const char *name, int scope )
{
    // implementation details are under insert_value_to_symbol function
    // returns NULL on failure
    if ( t->head == NULL ) {
       return NULL;
    }
    symbol *cur = t->head, *prev_scope = NULL;
    while ( cur != NULL ) {
        if ( !strcmp( cur->name, name ) ) {
            if ( cur->scope == scope ) {
                return cur;
            } else if ( cur->scope < scope ) {
                prev_scope = cur;
            }
        }
        cur = cur->next;
    }
    
    if ( prev_scope == NULL ) {
        fprintf( stderr, "%s has not been declared\n", name );
    }
    return prev_scope;
}

int insert_value_to_symbol( const symbol *s, const char *val ) {
    if ( s != NULL ) {
        strcpy( s->val, val );
        return 0;
    }
    return 1;
}

int get_type( char *val )
{
	// Check for char type
    if ( val[0] == '\'' && val [strlen( val) - 1 ] == '\'' && strlen( val ) < 5 ) {
        return CHAR;
    }

    // Check for float type (contains dot and cannot be converted to double)
    if ( strchr(val, '.') != NULL ) {
        return FLOAT;
    }

    // Check for double type (contains dot and can be converted to double)
    char* endptr;
    strtod( val, &endptr );
    if ( strchr( val, '.' ) && *endptr == '\0' ) {
        return DOUBLE;
    }

    // Check for int type (only contains digits)
    int i = 0;
    while ( val[i] != '\0' ) {
        if ( val[ i ] < '0' || val[ i ] > '9' ) {
            return -1;
        }
        i++;
    }
	return INT;
}



void display_symbol_table()
{
    /*
        traverse through table and print every entry
        with its struct variables
    */
    symbol *curr = t->head;
    printf( "Name\tSize\tType\tLineNo\tScope\tValue\n" );
    while ( curr != NULL ) {
        printf( "%s\t%d\t%d\t%d\t%d\t%s\n", curr->name, curr->size, curr->type,
                curr->line, curr->scope, curr->val );
        curr = curr->next;
    }
}
