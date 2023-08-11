P_NAME=ft_tail
COMPILER=cc
FLAGS= -Wall -Wextra -Werror
FILES=main.c utils.c
OBJS=$(FILES:.c=.o)

all: $(P_NAME)

$(P_NAME):
	$(COMPILER) $(FLAGS) $(FILES) -o $(P_NAME)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(P_NAME)

re: fclean all
