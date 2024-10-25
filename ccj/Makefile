NAME1 = comp1
NAME2 = compn
OBJ_DIR = obj
SRC1 = cg.c expr.c gen.c interp.c main.c scan.c tree.c
SRC2 = cgn.c expr.c gen.c interp.c main.c scan.c tree.c
OBJ1 = $(SRC1:%.c=$(OBJ_DIR)/%.o)
OBJ2 = $(SRC2:%.c=$(OBJ_DIR)/%.o)
OBJ = $(sort $(OBJ1) $(OBJ2)) # Combine and remove duplicates
CC = cc
CFLAGS = -g
NASM = nasm -f elf64
LINK_FLAGS = -no-pie

all: $(NAME1) $(NAME2)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME1): $(OBJ1)
	$(CC) -o $(NAME1) $(CFLAGS) $(OBJ1)

$(NAME2): $(OBJ2)
	$(CC) -o $(NAME2) $(CFLAGS) $(OBJ2)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME1) $(NAME2) out out.s

re: fclean all

test: $(NAME1)
	./$(NAME1) input01
	$(CC) -o out out.s
	./out
	./$(NAME1) input02
	$(CC) -o out out.s
	./out

testn: $(NAME2)
	./$(NAME2) input01
	$(NASM) out.s
	$(CC) $(LINK_FLAGS) -o out out.o
	./out
	./$(NAME2) input02
	$(NASM) out.s
	$(CC) $(LINK_FLAGS) -o out out.o
	./out

.PHONY: all clean fclean re test testn
