CC= clang
FLAGS= -Wall -Wextra -Werror
NAME= Sully

SRC= Sully.c

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
		@rm -rf tmp
		@rm -rf tmp_go

test: $(NAME)
		mkdir -p tmp ; (cp Sully tmp/ ; cd tmp/ ; ./Sully ; ls -al | grep Sully | wc -l)
		(cd tmp/ ; diff ../Sully.c Sully_5.c ; diff ../Sully.c Sully_4.c ; diff Sully_5.c Sully_0.c || true)

go: fclean
	go build Sully.go ; mkdir -p tmp_go ; cp Sully tmp_go/
	(cd tmp_go/ ; ./Sully ; ls -al | grep Sully | wc -l)
	(cd tmp_go/ ; diff ../Sully.go Sully_5.go ; diff ../Sully.go Sully_4.go ; diff Sully_5.go Sully_0.go || true)


re: fclean all
