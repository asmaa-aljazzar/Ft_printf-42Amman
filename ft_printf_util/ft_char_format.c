/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:41:05 by aaljazza          #+#    #+#             */
/*   Updated: 2024/11/02 14:41:11 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../ft_printf.h"

int	ft_char_format(va_list args, int printed_chars)
{
	char	x;

	x = (char)va_arg(args, int);
	ft_putchar_fd(x, 1);
	printed_chars++;
	return (printed_chars);
}
