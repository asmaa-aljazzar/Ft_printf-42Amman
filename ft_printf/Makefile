#! VERY IMPORTANT
#TODO: Change gcc to cc here and in libft Makefile

NAME = libftprintf.a
EXEC = ft_printf_exec

LIBFT_DIR = ../libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a

FUNCS_DIR = ft_printf_util
FUNCS_SRCS = ${FUNCS_DIR}/ft_char_format.c

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_format.c

OBJS = $(SRCS:%.c=%.o)
FUNCS_OBJS = $(FUNCS_SRCS:$(FUNCS_DIR)/%.c=$(FUNCS_DIR)/%.o)

all: $(LIBFT_LIB) $(NAME) $(EXEC)

$(LIBFT_LIB):
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT_LIB)
	@ar rcs ../$(NAME) $(OBJS) 

$(EXEC): $(OBJS) $(FUNCS_OBJS) $(LIBFT_LIB)
	$(CC) $(CFLAGS) $(OBJS) $(FUNCS_OBJS) -L$(LIBFT_DIR) -lft -o ../$(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(FUNCS_DIR)/%.o: $(FUNCS_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@rm -f $(FUNCS_OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@rm -f ../$(NAME) 
	@rm -f ../$(EXEC)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: fclean all clean re