NAME = rush-02
CC = gcc
CFILES = controller.c util.c read_file.c main.c
OBJ = $(CFILES:%.C=%.O)

FLAGS = -Wall -Wextra -Werror

$(NAME): $(CFILES) $(OBJ)
	$(CC) $(FLAGS) $(CFILES) -o $(NAME)
    
clean :
	rm -rf $(OBJ)
    
fclean : clean
	rm -rf $(NAME)

re : fclean all
