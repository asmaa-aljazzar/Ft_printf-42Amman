#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>
#include "libft/libft.h"

// Functions Prototype

int ft_printf(const char *format, ...);
int process_format(const char *format, va_list args);
int ft_char_format(va_list args, int printed_chars);
int ft_str_format(va_list args, int printed_chars);
int ft_ptr_format(va_list args, int printed_chars);
int ft_decimal_format(va_list args, int printed_chars);
int ft_unsigned_format(va_list args, int printed_chars);
int ft_upper_hex_format(va_list args, int printed_chars);
int ft_lower_hex_format(va_list args, int printed_chars);
#endif
