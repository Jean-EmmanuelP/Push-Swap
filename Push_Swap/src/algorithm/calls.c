/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:39:33 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/26 15:32:55 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

/*
	2 cas possibles :
	c b a --> sa(bca) --> ra(abc)
	c a b --> ra(bca) --> ra(abc)
*/
void	case_1(t_Node **first, t_Node **second, t_Node **third)
{
	if ((*second)->data > (*third)->data)
		swap_elements(first);
	else
		rotate_elements(first);
	rotate_elements(first);
}

/*
	2 cas possibles :
	b c a --> ra(abc)
	b a c --> sa(abc)
*/
void	case_2(t_Node **first, t_Node **second)
{
	if ((*first)->data > (*second)->data)
	{
		printf("ici [0]");
		swap_elements(first);
	}
	else
	{
		printf("ici [1]");
		rotate_elements(first);
	}
}

/*
	1 cas possible :
	a c b --> sa(cab) --> rra(abc)
*/
void	case_3(t_Node **first)
{
	swap_elements(first);
	reverse_elements(first);
}