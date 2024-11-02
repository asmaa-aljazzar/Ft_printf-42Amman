#include "../ft_printf.h"

static int print_pointer_in_hex(unsigned long addr, int printed_chars);

int ft_ptr_format(va_list args, int printed_chars)
{
        void *ptr; 
        ptr = va_arg(args, void *);
        unsigned long addr = (unsigned long)ptr;
        printed_chars = print_pointer_in_hex(addr, printed_chars);
    return (printed_chars);
}

static int print_pointer_in_hex(unsigned long addr,int printed_chars)
{
    char buffer[20];
    int index;

    index = 19;
    buffer[index--] = '\0';
    if (!addr)
        buffer[index--] = '0';
    else
    {
        while (addr > 0)
        {
            int digit = addr % 16;
            if ( digit < 10)
            {
                buffer[index--] = digit + '0';
                printed_chars++;
            }
            else
            {
                buffer[index--] = digit - 10 + 'a';
                printed_chars++;
            }
            addr /= 16;
        }
    }
    buffer[index--] = 'x';
    buffer[index] = '0';
    printed_chars += 2;
    ft_putstr_fd(&buffer[index], 1);
    return (printed_chars);
}
