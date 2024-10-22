#include "ft_printf.h"

int process_format(const char *format, va_list args)
{
    // int sum;
    int i;
    if (args)
    {
        return 0;
    }
    // sum = 0;
    i = 0;
    while (format[i] != '\0')
    {
        if (format[i] != '%')
            ft_putchar_fd(format[i], 1);
        else
        i++;
            if (format[i] == 'c')
            {
                i++;
                char x;
                x = (char)va_arg(args, int);
                ft_putchar_fd(x, 1);
            }
            else if (format[i+1] == 's')
            {
                i++;
                //TODO: Prints a string (as defined by the common C convention).
            }
            else if (format[i+1] == 'p')
            {
                i++;
                //TODO: The void * pointer argument has to be printed in hexadecimal format.
            }
            else if (format[i+1] == 'd')
            {
                i++;
                //TODO: Prints a decimal (base 10) number.
            }
            else if (format[i+1] == 'i')
            {
                i++;
                //TODO:  Prints an integer in base 10
            }
            else if (format[i+1] == 'u')
            {
                i++;
                //TODO: Prints an unsigned decimal (base 10) number.
            }
            else if (format[i+1] == 'x')
            {
                i++;
                //TODO: Prints a number in hexadecimal (base 16) lowercase format.
            }
            else if (format[i+1] == 'X')
            {
                i++;
                //TODO: Prints a number in hexadecimal (base 16) uppercase format.
            }
            else if (format[i+1] == 'X')
            {
                i++;
                //TODO: Prints a percent sign.
            }
        i++;
    }
    return 0;
}