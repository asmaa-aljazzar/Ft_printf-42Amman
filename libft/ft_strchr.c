/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:39:08 by aaljazza          #+#    #+#             */
/*   Updated: 2024/09/28 13:39:14 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
* Search for specific char ( first appearing )
* in a string and return pointer to it
*/
char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			ch;

	i = 0;
	ch = (char)c;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == ch)
		return ((char *)&s[i]);
	return (NULL);
}
