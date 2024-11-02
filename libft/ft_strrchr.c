/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:42:56 by aaljazza          #+#    #+#             */
/*   Updated: 2024/09/28 13:43:01 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
* Search for specific char ( last appearing )in a string and return pointer to it
*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;
	char	c2;

	slen = ft_strlen(s);
	c2 = (char) c;
	while (slen > 0)
	{
		if (s[slen] == c2)
			return ((char *)&s[slen]);
		slen--;
	}
	if (s[0] == c2)
		return ((char *)&s[0]);
	return (NULL);
}
