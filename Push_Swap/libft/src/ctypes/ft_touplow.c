/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_touplow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:04:49 by jperrama          #+#    #+#             */
/*   Updated: 2022/11/11 12:04:49 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(char c)
{
	if ('a' <= c && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

char	ft_tolower(char c)
{
	if ('A' <= c && c <= 'Z')
	{
	c += 32;
	}
	return (c);
}