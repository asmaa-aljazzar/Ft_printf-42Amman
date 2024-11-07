/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_format.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:42:12 by aaljazza          #+#    #+#             */
/*   Updated: 2024/11/02 14:42:15 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_put_unsigned_nbr(unsigned int n, int fd);
static int	ft_unsign_len(unsigned int n);

int	ft_unsigned_format(va_list args, int printed_chars)
{
	unsigned int	x;

	x = va_arg(args, unsigned int);
	ft_put_unsigned_nbr(x, 1);
	printed_chars += ft_unsign_len(x);
	return (printed_chars);
}

// Recursive call for higher digits
// Convert the last digit to char

static void	ft_put_unsigned_nbr(unsigned int n, int fd)
{
	char	digit;

	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n > 9)
	{
		ft_put_unsigned_nbr(n / 10, fd);
	}
	digit = (n % 10) + '0';
	write (1, &digit, 1);
}

static int	ft_unsign_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
