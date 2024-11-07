/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:39:58 by aaljazza          #+#    #+#             */
/*   Updated: 2024/11/02 14:40:20 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_format_type1(const char *format, int *i, va_list args);
static int	ft_per_or_not_format(const char *format, int *i, va_list args);
static int	ft_format_type2(const char *format, int *i, va_list args);

int	process_format(const char *format, va_list args)
{
	int	printed_chars;
	int	i;

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
			printed_chars += ft_per_or_not_format(format, &i, args);
		}
		i++;
	}
	return (printed_chars);
}

static int	ft_format_type1(const char *format, int *i, va_list args)
{
	char	*str;
	int		printed_chars;

	printed_chars = 0;
	if (format[*i] == 'c')
		printed_chars = ft_char_format(args, printed_chars);
	else if (format[*i] == 's')
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printed_chars += write(1, "(null)", 6);
		else
		{
			printed_chars = ft_strlen(str);
			ft_putstr_fd(str, 1);
		}
	}
	else
	{
		printed_chars += ft_format_type2(format, i, args);
	}
	return (printed_chars);
}

static int	ft_format_type2(const char *format, int *i, va_list args)
{
	int		printed_chars;

	printed_chars = 0;
	if (format[*i] == 'p')
		printed_chars = ft_ptr_format(args, printed_chars);
	else if (format[*i] == 'd' || format[*i] == 'i')
		printed_chars = ft_decimal_format(args, printed_chars);
	else if (format[*i] == 'u')
		printed_chars = ft_unsigned_format(args, printed_chars);
	else if (format[*i] == 'x')
		printed_chars = ft_lower_hex_format(args, printed_chars);
	else if (format[*i] == 'X')
		printed_chars = ft_upper_hex_format(args, printed_chars);
	else
	{
		ft_putchar_fd('%', 1);
		printed_chars++;
	}
	return (printed_chars);
}

static int	ft_per_or_not_format(const char *format, int *i, va_list args)
{
	int	printed_chars;

	printed_chars = 0;
	if (format[*i] == '%')
	{
		ft_putchar_fd('%', 1);
		printed_chars++;
	}
	else
	{
		printed_chars = ft_format_type1(format, i, args);
	}
	return (printed_chars);
}
