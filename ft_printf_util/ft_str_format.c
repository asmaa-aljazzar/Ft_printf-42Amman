/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:42:00 by aaljazza          #+#    #+#             */
/*   Updated: 2024/11/02 14:42:04 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../ft_printf.h"

int	ft_str_format(va_list args, int printed_chars)
{
	char	*x;

	x = va_arg(args, char *);
	ft_putstr_fd(x, 1);
	printed_chars += ft_strlen(x);
	return (printed_chars);
}
