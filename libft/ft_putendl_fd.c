/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:37:38 by aaljazza          #+#    #+#             */
/*   Updated: 2024/09/28 13:37:45 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	len;

	if (s)
	{
		len = ft_strlen(s);
		write (fd, s, len);
		write (fd, "\n", 1);
	}
}
