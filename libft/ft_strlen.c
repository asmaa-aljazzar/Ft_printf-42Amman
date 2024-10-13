/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:41:25 by aaljazza          #+#    #+#             */
/*   Updated: 2024/09/28 13:41:33 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// This function count the number of characters in a string
size_t	ft_strlen(const char *str)
{
	size_t	counter;

	counter = 0;
	while (*str++ != '\0')
	{
		counter++;
	}
	return (counter);
}
