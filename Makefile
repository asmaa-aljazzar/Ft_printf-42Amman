NAME = libftprintf.a
MAKE = make

FUNCS_DIR = ft_printf_util
FUNCS_SRCS = ${FUNCS_DIR}/ft_char_format.c ${FUNCS_DIR}/ft_str_format.c\
	${FUNCS_DIR}/ft_decimal_format.c ${FUNCS_DIR}/ft_unsigned_format.c\
	${FUNCS_DIR}/ft_ptr_format.c ${FUNCS_DIR}/ft_hex_format.c
	
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_format.c

OBJS = $(SRCS:%.c=%.o)
FUNCS_OBJS = $(FUNCS_SRCS:$(FUNCS_DIR)/%.c=$(FUNCS_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS) $(FUNCS_OBJS) $(HEAD)
	@cd libft && $(MAKE)
	@cp libft/libft.a $(NAME)
	@ar rcs $(NAME) $(OBJS) $(FUNCS_OBJS) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(FUNCS_DIR)/%.o: $(FUNCS_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@rm -f $(FUNCS_OBJS)
	@$(MAKE) clean -C ./libft

fclean: clean
	@rm -f $(NAME)
	@rm -f libft.a
	@$(MAKE) fclean -C ./libft

re: fclean all

.PHONY: fclean all clean re
