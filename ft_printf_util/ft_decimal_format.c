/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:41:19 by aaljazza          #+#    #+#             */
/*   Updated: 2024/11/02 14:41:30 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_decimal_format(va_list args, int printed_chars)
{
	int		x;
	char	*str;

	x = va_arg(args, int);
	ft_putnbr_fd(x, 1);
	str = ft_itoa(x);
	if (str)
	{
		printed_chars += ft_strlen(str);
		free(str);
	}
	return (printed_chars);
}
