/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:31:47 by aaljazza          #+#    #+#             */
/*   Updated: 2024/09/28 13:32:14 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
* Fill memory bytes by zeros
*/
void	ft_bzero(void *ptr, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *)ptr;
	while (len > 0)
	{
		*temp++ = 0;
		len--;
	}
}
