/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:04:34 by jperrama          #+#    #+#             */
/*   Updated: 2022/11/11 12:04:34 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *foin, int aiguille)
{
	int	i;

	i = ft_strlen(foin);
	while (i >= 0)
	{
		if (foin[i] == (char)aiguille)
			return ((char *)foin + i);
		i--;
	}
	return (NULL);
}
