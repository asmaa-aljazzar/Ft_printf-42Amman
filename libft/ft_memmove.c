/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:36:23 by aaljazza          #+#    #+#             */
/*   Updated: 2024/09/28 13:36:30 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
* same with memcpy but handle overlapping case
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dst;
	unsigned int	i;

	i = 0;
	if (!src && !dst)
		return (NULL);
	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	if (dst > src)
	{
		while (len-- > 0)
			temp_dst[len] = temp_src[len];
	}
	else
	{
		while (i < len)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	return (dst);
}
