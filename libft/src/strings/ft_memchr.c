/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:03:01 by jperrama          #+#    #+#             */
/*   Updated: 2022/11/11 12:03:01 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*foin;
	unsigned char	aiguille;
	size_t			i;

	foin = (unsigned char *)s;
	aiguille = (unsigned char)c;
	i = 0;
	while ((i < n))
	{
		if (foin[i] == aiguille)
		{
			return (foin + i);
		}
		i++;
	}
	return (0);
}
