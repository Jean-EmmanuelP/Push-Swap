/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:04:20 by jperrama          #+#    #+#             */
/*   Updated: 2022/11/11 12:04:20 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ns;

	i = 0;
	while (s[i])
	{
		i++;
	}
	ns = malloc(sizeof(char) * (i + 1));
	if (!ns)
		return (0);
	i = 0;
	while (s[i])
	{
		ns[i] = (f)(i, s[i]);
		i++;
	}
	ns[i] = 0;
	return (ns);
}
