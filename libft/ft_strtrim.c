/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:43:42 by aaljazza          #+#    #+#             */
/*   Updated: 2024/09/28 13:43:47 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*result(const char *s1, unsigned int start, unsigned int len);
static int	istotrim(const char *set, char c);

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned int	start;
	unsigned int	end;

	start = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_strdup(""));
	if (set == NULL)
		return (ft_strdup(s1));
	while (istotrim(set, s1[start]) && start < end)
		start++;
	while (end > start && istotrim(set, s1[end - 1]))
		end--;
	return (result(s1, start, end - start));
}

static int	istotrim(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static char	*result(const char *s1, unsigned int start, unsigned int len)
{
	char	*result;

	if (len == 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + start, len + 1);
	return (result);
}
