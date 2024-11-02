#include "../ft_printf.h"

int ft_decimal_format(const char *format, int *i,va_list args, int printed_chars)
{
        int x;
        x = va_arg(args, int);
        ft_putnbr_fd(x, 1);
        char *str;
        str = ft_itoa(x);
        if (str)
        {
        printed_chars += ft_strlen(str);
        free(str);
        }
    return (printed_chars);
}
