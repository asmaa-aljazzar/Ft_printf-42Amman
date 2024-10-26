#include "ft_printf.h"

static int format_type(const char *format, int i, va_list args, int printed_chars);

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
        printed_chars = format_type(format, i, args, printed_chars);
        }
    i++;
    }
    return (printed_chars);
}

static int format_type(const char *format, int i, va_list args, int printed_chars)
{
    printed_chars = ft_char_format(format, &i, args, printed_chars);
    printed_chars = ft_str_format(format, &i, args, printed_chars);
    printed_chars = ft_ptr_format(format, &i, args, printed_chars);
    printed_chars = ft_decimal_format(format, &i, args, printed_chars);

    //     else if (format[i] == 'd')
    //     {
    //         //TODO: Prints a decimal (base 10) number.
    //     }
    //     else if (format[i] == 'i')
    //     {

    //         //TODO:  Prints an integer in base 10
    //     }
    //     else if (format[i] == 'u')
    //     {

    //         //TODO: Prints an unsigned decimal (base 10) number.
    //     }
    //     else if (format[i] == 'x')
    //     {

    //         //TODO: Prints a number in hexadecimal (base 16) lowercase format.
    //     }
    //     else if (format[i] == 'X')
    //     {

    //         //TODO: Prints a number in hexadecimal (base 16) uppercase format.
    //     }
    //     else if (format[i] == '%')
    //     {

    //         //TODO: Prints a percent sign.
    //     }
    return (printed_chars);
}