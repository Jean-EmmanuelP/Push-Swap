/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_overflow.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-emmanuelperramant <jean-emmanuelpe    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:35:32 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/31 22:50:35 by jean-emmanu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_overflow(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s2[i] > s1[i])
			return (true);
		i++;
	}
	return (false);
}
