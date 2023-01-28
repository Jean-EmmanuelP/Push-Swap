/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:03:42 by jperrama          #+#    #+#             */
/*   Updated: 2022/11/11 12:03:42 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char const s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (is_charset(s[i], c) && s[i])
		{
			i++;
		}
		if (!is_charset(s[i], c) && s[i])
		{
			count++;
			while (!is_charset(s[i], c) && s[i])
			{
				i++;
			}
		}
	}
	return (count);
}

static char	*ft_strndup(char const *s, int n)
{
	int		i;
	char	*out;

	out = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!out)
		return (0);
	i = 0;
	while (i < n && s[i])
	{
		out[i] = s[i];
		i++;
	}
	out[i] = 0;
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		i;
	int		j;

	out = malloc(sizeof(char *) * (count_word(s, c) + 1));
	i = 0;
	j = 0;
	while (s[i])
	{
		while (is_charset(s[i], c) && s[i])
			i++;
		s += i;
		i = 0;
		if (!is_charset(s[i], c) && s[i])
		{
			while (!is_charset(s[i], c) && s[i])
				i++;
			out[j++] = ft_strndup(s, i);
			s += i;
			i = 0;
		}
	}
	out[j] = 0;
	return (out);
}
