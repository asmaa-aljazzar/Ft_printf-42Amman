/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:42:35 by aaljazza          #+#    #+#             */
/*   Updated: 2024/09/28 13:42:48 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*find_string(const char *haystack, const char *needle, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	newlen;

	if (needle[0] == '\0')
		return ((char *) haystack);
	newlen = ft_strlen(haystack);
	if (len > newlen)
		len = newlen;
	return (find_string(haystack, needle, len));
}

static char	*find_string(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	while (haystack[h] && h < len)
	{
		n = 0;
		while (haystack[h + n] == needle[n] && haystack[h + n] && (h + n) < len)
		{
			n++;
			if (needle[n] == '\0')
				return ((char *)haystack + h);
		}
		h++;
	}
	return (NULL);
}
