#include"../ft_printf.h"

int ft_char_format(va_list args, int printed_chars)
{
        char x;
        x = (char)va_arg(args, int);
        ft_putchar_fd(x, 1);
        printed_chars++;
    return (printed_chars);
}
