CC= clang
FLAGS= -Wall -Wextra -Werror
NAME= Grace

SRC= Grace.c

OBJ= $(SRC:.c=.o)

.PHONY: clean fclean re

all:$(NAME)

$(NAME): $(OBJ)
		@$(CC) -o $(NAME) $(OBJ)
		@echo "\t\xF0\x9F\x8F\x81   Compiling \033[35m$(NAME) \033[0mDONE!"

%.o: %.c
		@echo "\t\xF0\x9F\x94\xA7   Building \033[34m $@ \033[0m"
		@$(CC) -c $(FLAGS) -o $@ $<

clean:
		@echo "\t\xF0\x9F\x92\xA3   Cleaning"
		@rm -rf $(OBJ)

fclean: clean
		@echo "\t\xF0\x9F\x9A\xBD   Full Clean"
		@rm -rf $(NAME)
		@rm -rf Grace_kid.c Grace_kid.go

test : $(NAME)
		./Grace && diff Grace.c Grace_kid.c

go:
	go run Grace.go && diff Grace.go Grace_kid.go

re: fclean all
