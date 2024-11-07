/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:40:27 by aaljazza          #+#    #+#             */
/*   Updated: 2024/11/02 14:40:35 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			printed_chars;

	printed_chars = 0;
	va_start (args, format);
	printed_chars = process_format (format, args);
	va_end (args);
	return (printed_chars);
}
