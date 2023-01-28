/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:01:54 by jperrama          #+#    #+#             */
/*   Updated: 2022/11/11 12:01:54 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if ((32 <= c && c <= 126))
	{
		return (1024);
	}
	return (0);
}

#ifdef TESTING

int	main(int ac, char **av)
{
	if (ac)
		printf("%d", is_print(av[1][0]));
	return (0);
}
#endif