NAME = phonebookinator2000
SRC_DIR = ./
OBJ_DIR = ./
INC_DIR = ./

OBJ	=	main.o \
		contact.class.o \
		phonebook.class.o \
		support_functions.o

HEADERS	= $(INC_DIR)

CC		= clang++
CFLAGS	= -Wall -Wextra -Werror
INC_OPT = -I$ (INC_DIR)
OUT_OPT = -o
OBJ_OPT = $< -o $@

RMF 	= rm -f

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $(OBJ_OPT) $(INC_OPT)

all: $(NAME)

$(NAME): $(addprefix $(OBJ_DIR), $(OBJ))
	$(CC) $(CFLAGS) $^ $(OUT_OPT) $(NAME)

clean:
	$(RMF) $(addprefix $(OBJ_DIR), $(OBJ))

fclean: clean
	$(RMF) $(NAME)

re: fclean all