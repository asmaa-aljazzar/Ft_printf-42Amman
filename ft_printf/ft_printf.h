#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>
#include "../libft/libft.h"

// Functions Prototype

int ft_printf(const char *format, ...);
int process_format(const char *format, va_list args);
int ft_char_format(const char *format, int *i, va_list args, int printed_chars);
int ft_str_format(const char *format, int *i, va_list args, int printed_chars);
int ft_ptr_format(const char *format, int *i, va_list args, int printed_chars);

#endif