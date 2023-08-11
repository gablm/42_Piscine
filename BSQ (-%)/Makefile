COMPILER=cc
INC_DIR=includes
OBJS_DIR=srcs
FLAGS=-Wall -Wextra -Werror -I$(INC_DIR)/
NAME=bsq
INC=$(INC_DIR)/bsq.h
OBJS=$(OBJS_DIR)/main.c $(OBJS_DIR)/utils.c

$(NAME):
	$(COMPILER) $(OBJS) -o $(NAME) $(FLAGS)

all: $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
