#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4

typedef struct symbol   //data structure of items in the list
{
    char *name;         //identifier name
    int size;           //storage size of identifier name
    int type;           //identifier type
    char *val;          //value of the identifier
    int line;           //declared line number
    int scope;          //scope of the variable
    struct symbol *next;
} symbol;

typedef struct table    //keeps track of the start of the list
{
    symbol* head;
} table;

static table *t;

const int size_type_map[5] = { -1, 1, 2, 4, 8 }; // map types to their sizes

table* allocate_space_for_table();
// allocate space for start of table thus making a new symbol table

symbol* allocate_space_for_table_entry( const char *name, int type, int lineno,
                                        int scope );
// allocates space for items in the list and initialisation

int insert_into_table( const char *name, int type, int lineno, int scope );
// inserts symbols into the table when declared

int insert_value_to_name( const char *name, const char *val, int scope );
// inserts values into the table when a variable is initialised

int insert_value_to_symbol( const symbol *s, const char *val );
// inserts value to a symbol table entry

symbol* check_symbol_table( const char *name, int scope );
// checks symbol table whether the variable has been declared or not

symbol* get_symbol( const char *name, int scope );
// returns a symbol with matching name and in the lowest scope before parameter

int get_type( char *val );
// returns the type of parameter val

void display_symbol_table();
// displays symbol table
