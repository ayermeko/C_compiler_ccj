int scan(token *t);
ASTnode *mkastnode(int op, ASTnode *left,
			ASTnode *right, int intvalue);
ASTnode *mkastleaf(int op, int intvalue);
ASTnode *mkastunary(int op, ASTnode *left, int intvalue);
ASTnode *binexpr(void);
int interpretAST(ASTnode *n);