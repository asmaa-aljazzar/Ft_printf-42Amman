/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljazza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:38:11 by aaljazza          #+#    #+#             */
/*   Updated: 2024/09/28 13:38:16 by aaljazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Put a string in a file description
void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	len;

	if (s)
	{
		len = ft_strlen(s);
		write (fd, s, len);
	}
}
