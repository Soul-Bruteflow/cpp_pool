NAME = ft_retro
SRC_DIR = ./src/
OBJ_DIR = ./obj/
INC_DIR = ./inc/

OBJ	=	Game.o \
        main.o \
        Object.o \
        ObjectField.o \
        Player.o \
        Rect.o \
        Vec2i.o \
        Vec2ui.o

HEADERS	= $(INC_DIR)

CXX		= clang++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
INC_OPT = -I $(INC_DIR)
OUT_OPT = -o
GEN_OBJ = -c
OBJ_OPT = $< -o $@
CUR_OPT = -lncurses

RMF 	= rm -f

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	@mkdir -p obj
	$(CXX) $(GEN_OBJ) $(OBJ_OPT) $(INC_OPT)

all: $(NAME)

$(NAME): $(addprefix $(OBJ_DIR), $(OBJ))
	$(CXX) $(CFLAGS) $^ $(OUT_OPT) $(NAME) $(CUR_OPT)

clean:
	$(RMF) $(addprefix $(OBJ_DIR), $(OBJ))

fclean: clean
	$(RMF) $(NAME)

re: fclean all