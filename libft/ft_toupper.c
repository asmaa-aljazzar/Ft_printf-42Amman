/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:45:06 by aaljazza          #+#    #+#             */
/*   Updated: 2024/09/28 13:45:10 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
* The function converts a lower-case letter 
* to the corresponding upper-case letter.
*/
int	ft_toupper(int c)
{
	if (c <= 122 && c >= 97)
		return (c - 32);
	return (c);
}
