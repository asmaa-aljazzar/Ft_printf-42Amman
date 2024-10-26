#include "ft_printf.h"
#include <stdio.h>

int ft_printf(const char *format, ...)
{
    va_list args;
    int printed_chars;

    printed_chars = 0;
    va_start(args, format);
    printed_chars = process_format(format, args);
    va_end(args);
    return (printed_chars);
}
