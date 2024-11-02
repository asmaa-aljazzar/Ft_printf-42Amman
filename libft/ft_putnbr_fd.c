/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:37:57 by aaljazza          #+#    #+#             */
/*   Updated: 2024/09/28 13:38:02 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
* put a number in a file description
*/

void	ft_putnbr_fd(int n, int fd)
{
	char	result;

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write (fd, "-", 1);
		n = n * -1;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		result = n + 48;
		write (fd, &result, 1);
	}
}
