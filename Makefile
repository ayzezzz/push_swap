NAME = push_swap
CC= gcc
CFLAGS= -Wall -Wextra -Werror
RM= rm -rf

PRINTF=ft_printf/libftprintf.a
LIBFT = libft/libft.a


SRC = main.c\
	  error_utils.c\
	  actions_push.c\
	  actions_rotate.c\
	  actions_rr.c\
	  actions_swap.c\
	  argv_utils.c\
	  sort_utils1.c\
	  sort_utils2.c\
	  radix_sort.c\
	  flags.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	make -C ./ft_printf -s
	make -C ./libft -s
	make bonus -C ./libft -s
	$(CC) $(CFLAGS) $(LIBFT) $(PRINTF) $(OBJ) -o $(NAME)
clean:
	make clean -C ./ft_printf -s
	make clean -C ./libft -s
	make bonus clean -C ./libft -s
	$(RM) $(OBJ)

fclean: clean
	make fclean -C ./ft_printf -s
	make fclean -C ./libft -s
	make bonus fclean -C ./libft -s
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re