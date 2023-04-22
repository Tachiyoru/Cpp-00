NAME		=	megaphone

GREEN		=	\033[1;32m
RED			=	\033[1;31m
DEFAULT		=	\033[0m

OBJ_DIR		=	objs
SRC_DIR		=	$(shell find srcs -type d)

vpath %.cpp $(foreach dir, $(SRC_DIR), $(dir):)

SRCS		=

OBJS		=	$(SRCS:%.cpp=${OBJ_DIR}/%.o)

RM			=	rm -rf

CC			=	c++

CFLAGS		=	-Werror -Wall -Wextra -std=c++98 -g3

all:	${NAME}

$(NAME):
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "$(GREEN)##### cub3d compiling finished! #####$(DEFAULT)"

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
		$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR) :
		mkdir -p $@

clean:
		${RM} $(OBJ_DIR)

fclean:        clean
		${RM} ${NAME}
		@echo "\n${GREEN}Everything cleaned${DEFAULT}"

re:            fclean
		$(MAKE) all -j

.PHONY:        all clean fclean re
