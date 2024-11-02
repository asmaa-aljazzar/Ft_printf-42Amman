#include"../ft_printf.h"

int ft_str_format(va_list args, int printed_chars)
{
        char *x;
        x = va_arg(args, char *);
        ft_putstr_fd(x, 1);
        printed_chars += ft_strlen(x);
    return (printed_chars);
}
