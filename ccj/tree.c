#include "defs.h"
#include "data.h"
#include "decl.h"

ASTnode *mkastnode(int op, ASTnode *left, ASTnode *right, int intvalue)
{
    ASTnode *n;

    n = (ASTnode *)malloc(sizeof(ASTnode));
    if (!n) {
        fprintf(stderr, "Unable to malloc in mkastnode()\n");
        exit(1);
    }
    // Copy in the field values and return it
    n->op = op;
    n->left = left;
    n->right = right;
    n->intvalue = intvalue;
    return (n);
}

// Make an AST leaf node
ASTnode *mkastleaf(int op, int intvalue) {
  return (mkastnode(op, NULL, NULL, intvalue));
}

// Make a unary AST node: only one child
ASTnode *mkastunary(int op, ASTnode *left, int intvalue) {
  return (mkastnode(op, left, NULL, intvalue));
}