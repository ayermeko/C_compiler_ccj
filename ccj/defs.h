#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Tokens
enum {
  T_EOF, T_PLUS, T_MINUS, T_STAR, T_SLASH, T_INTLIT
};

// Token structure
typedef struct s_token {
  int token;
  int intvalue;
} token;

// AST node types
enum {
  A_ADD, A_SUBTRACT, A_MULTIPLY, A_DIVIDE, A_INTLIT
};

// Abstract Syntax Tree structure
typedef struct s_ASTnode {
  int op;                        // "Operation" to be performed on this tree
  struct s_ASTnode *left;                 // Left and right child trees
  struct s_ASTnode *right;
  int intvalue;                  // For A_INTLIT, the integer value
} ASTnode;