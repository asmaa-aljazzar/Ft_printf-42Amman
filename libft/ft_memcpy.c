/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:35:57 by aaljazza          #+#    #+#             */
/*   Updated: 2024/09/28 13:36:08 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dst;

	if (src == (void *)0 && dst == (void *)0)
		return (dst);
	temp_src = (unsigned char *)src;
	temp_dst = (unsigned char *)dst;
	while (n > 0)
	{
		*temp_dst++ = *temp_src++;
		n--;
	}
	return (dst);
}
