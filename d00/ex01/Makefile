NAME = phonebookinator2000
SRC_DIR = ./src/
OBJ_DIR = ./obj/
INC_DIR = ./inc/

OBJ	=	main.o \
        Contact.o \
        PhoneBook.o

HEADERS	= $(INC_DIR)

CXX		= clang++
CFLAGS	= -Wall -Wextra -Werror
INC_OPT = -I $(INC_DIR)
OUT_OPT = -o
GEN_OBJ = -c
OBJ_OPT = $< -o $@

RMF 	= rm -f

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	@mkdir -p obj
	$(CXX) $(CFLAGS) $(GEN_OBJ) $(OBJ_OPT) $(INC_OPT)

all: $(NAME)

$(NAME): $(addprefix $(OBJ_DIR), $(OBJ))
	$(CXX) $(CFLAGS) $^ $(OUT_OPT) $(NAME)

clean:
	$(RMF) $(addprefix $(OBJ_DIR), $(OBJ))

fclean: clean
	$(RMF) $(NAME)

re: fclean all