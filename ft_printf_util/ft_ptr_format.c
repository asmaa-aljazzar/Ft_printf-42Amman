/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:41:51 by aaljazza          #+#    #+#             */
/*   Updated: 2024/11/02 14:41:54 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

static int	ft_p(unsigned long nb, int printed_chars);
static int	ft_pointer(unsigned long nb);
static int	ft_putchar(char c, int fd);

int	ft_ptr_format(va_list args, int printed_chars)
{
	void			*ptr;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
	{
		ft_putstr_fd("(nil)", 1);
		return (printed_chars + 5);
	}
	return (ft_p((unsigned long)ptr, printed_chars));
}

static int	ft_p(unsigned long nb, int printed_chars)
{
	if (nb == 0)
	{
		write(1, "(nil)", 5);
		printed_chars = 5;
	}
	else
	{
		ft_putstr_fd("0x", 1);
		printed_chars += (ft_pointer(nb) + 2);
	}
	return (printed_chars);
}

static int	ft_pointer(unsigned long nb)
{
	char	*base;
	int		len;

	base = "0123456789abcdef";
	len = 0;
	if (nb >= 16)
	{
		len += ft_pointer(nb / 16);
		len += ft_pointer(nb % 16);
	}
	else
	{
		len += ft_putchar(base[nb % 16], 1);
	}
	return (len);
}

static int	ft_putchar(char c, int fd)
{
	int	size;

	write (fd, &c, 1);
	size = 1;
	return (size);
}
