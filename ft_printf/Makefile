#! VERY IMPORTANT
#TODO: Change gcc to cc here and in libft Makefile

NAME = libftprintf.a

LIBFT_DIR = ../libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_format.c
OBJS = $(SRCS:%.c=%.o)

all: $(LIBFT_LIB) $(NAME)

$(LIBFT_LIB):
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT_LIB)
	@ar rcs ../$(NAME) $(OBJS) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@rm -f ../$(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: fclean all clean re