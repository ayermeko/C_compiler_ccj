int scan(token *t);
ASTnode *mkastnode(int op, ASTnode *left,
			ASTnode *right, int intvalue);
ASTnode *mkastleaf(int op, int intvalue);
ASTnode *mkastunary(int op, ASTnode *left, int intvalue);
ASTnode *binexpr(int ptp);
int interpretAST(ASTnode *n);