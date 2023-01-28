/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:01:43 by jperrama          #+#    #+#             */
/*   Updated: 2022/11/11 12:01:43 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if ((0 <= c && c <= 127))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

#ifdef TESTING

int	main(int ac, char **av)
{
	if (ac)
		printf("%d", is_ascii(av[1][0]));
	return (0);
}
#endif