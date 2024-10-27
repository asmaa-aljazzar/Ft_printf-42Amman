#include "ft_printf.h"
static int ft_format_type(const char *format, int *i, va_list args, int printed_chars);
static int ft_per_or_not_format(const char *format, int *i, va_list args, int printed_chars);

int process_format(const char *format, va_list args)
{
    int printed_chars;
    int i;

    printed_chars = 0;
    i = 0;
    while (format[i] != '\0')
    {
        if (format[i] != '%')
        {
            ft_putchar_fd(format[i], 1);
            printed_chars++;
        }
        else 
        {
            i++;
            printed_chars = ft_per_or_not_format(format, &i, args, printed_chars);
        
        }
    i++;
    }
    return (printed_chars);
}

static int ft_format_type(const char *format, int *i, va_list args, int printed_chars)
{
    if (format[*i] == 'c')
        printed_chars = ft_char_format(format, i, args, printed_chars);
    else if (format[*i] == 's')
        printed_chars = ft_str_format(format, i, args, printed_chars);
    else if (format[*i] == 'p')
        printed_chars = ft_ptr_format(format, i, args, printed_chars);
    else if (format[*i] == 'd' || format[*i] == 'i')
        printed_chars = ft_decimal_format(format, i, args, printed_chars);
    else if (format[*i] == 'u')
        printed_chars = ft_unsigned_format(format, i, args, printed_chars);
    else if (format[*i] == 'x')
        printed_chars = ft_lower_hex_format(format, i, args, printed_chars);
    else if (format[*i] == 'X')
        printed_chars = ft_upper_hex_format(format, i, args, printed_chars);
    else
    {
        ft_putchar_fd('%', 1);
        printed_chars++;
    }
    return (printed_chars);
}

static int ft_per_or_not_format(const char *format, int *i,va_list args, int printed_chars)
{
        if (format[*i] == '%')
            {
                ft_putchar_fd('%', 1);
                printed_chars++;
                
            }
            else
            {
                printed_chars = ft_format_type(format, i, args, printed_chars);
            }
    return (printed_chars);
}
