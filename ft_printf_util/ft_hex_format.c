#include "../ft_printf.h"

static void ft_put_hex(unsigned int n, int is_uppercase);
static int ft_hex_len(unsigned int n);

int ft_lower_hex_format(const char *format, int *i, va_list args, int printed_chars)
{
    unsigned int n;
    n = va_arg(args, unsigned int);
    ft_put_hex(n, 0);
    printed_chars += ft_hex_len(n);
    return (printed_chars);
}

int ft_upper_hex_format(const char *format, int *i, va_list args, int printed_chars)
{
    unsigned int n;
    n = va_arg(args, unsigned int);
    ft_put_hex(n, 1);
    printed_chars += ft_hex_len(n);
    return (printed_chars);
}

static void ft_put_hex(unsigned int n, int is_uppercase)
{
    char *hex_digits;

    if (is_uppercase)
        hex_digits = "0123456789ABCDEF";
    else
        hex_digits = "0123456789abcdef";
    
    if (n > 16)
    {
        ft_put_hex (n / 16, is_uppercase);
        ft_put_hex (n % 16, is_uppercase);
    }
    else
        ft_putchar_fd(hex_digits[n], 1);
}

static int ft_hex_len(unsigned int n)
{
    int len;

    len = 0;
    if (n == 0)
        return (1);
    while (n > 0)
    {
        n /= 16;
        len++;
    }
    return (len);
}