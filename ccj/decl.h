int scan(token *t);

ASTnode *mkastnode(int op, ASTnode *left,
			ASTnode *right, int intvalue);
ASTnode *mkastleaf(int op, int intvalue);
ASTnode *mkastunary(int op, ASTnode *left, int intvalue);
ASTnode *binexpr(int rbp);

int interpretAST(ASTnode *n);
void generatecode(ASTnode *n);

void freeall_registers(void);
void cgpreamble();
void cgpostamble();
int cgload(int value);
int cgadd(int r1, int r2);
int cgsub(int r1, int r2);
int cgmul(int r1, int r2);
int cgdiv(int r1, int r2);
void cgprintint(int r);
