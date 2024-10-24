#include "ft_printf.h"

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
            if (format[i] == 'c')
            {
                printed_chars = ft_char_format(format, &i, args, printed_chars);
            }
        //     else if (format[i] == 's')
        //     {
        //         i++;
        //         //TODO: Prints a string (as defined by the common C convention).
        //     }
        //     else if (format[i] == 'p')
        //     {
        //         i++;
        //         //TODO: The void * pointer argument has to be printed in hexadecimal format.
        //     }
        //     else if (format[i] == 'd')
        //     {
        //         i++;
        //         //TODO: Prints a decimal (base 10) number.
        //     }
        //     else if (format[i] == 'i')
        //     {
        //         i++;
        //         //TODO:  Prints an integer in base 10
        //     }
        //     else if (format[i] == 'u')
        //     {
        //         i++;
        //         //TODO: Prints an unsigned decimal (base 10) number.
        //     }
        //     else if (format[i] == 'x')
        //     {
        //         i++;
        //         //TODO: Prints a number in hexadecimal (base 16) lowercase format.
        //     }
        //     else if (format[i] == 'X')
        //     {
        //         i++;
        //         //TODO: Prints a number in hexadecimal (base 16) uppercase format.
        //     }
        //     else if (format[i] == 'X')
        //     {
        //         i++;
        //         //TODO: Prints a percent sign.
        //     }
        // i++;
        }
    i++;
    }
    return (printed_chars);
}