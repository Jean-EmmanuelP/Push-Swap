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

/* Cette fonction permet de mesurer la taille de la stack */
int	ft_stack_size(t_Node *stack_a)
{
	int		i;
	t_Node	*tmp;

	i = 0;
	tmp = stack_a;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

/* Cette fonction prends les positions de chaque elements */
void	get_position(t_Node **stack)
{
	t_Node	*tmp;
	int		pos;

	tmp = *stack;
	pos = 1;
	while (tmp)
	{
		tmp->position = pos;
		tmp = tmp->next;
		pos ++;
	}
}

/*
	2 cas possibles :
	c b a --> sa(bca) --> ra(abc)
	c a b --> ra(bca) --> ra(abc)
*/
void	case_1(t_Node **first, t_Node **second, t_Node **third)
{
	if ((*second)->data > (*third)->data)
		swap_elements(first, 'a');
	else
		rotate_elements(first, 'a');
	rotate_elements(first, 'a');
}

/*
	2 cas possibles :
	b c a --> ra(abc)
	b a c --> sa(abc)
*/
void	case_2(t_Node **first, t_Node **second)
{
	if ((*first)->data > (*second)->data)
		swap_elements(first, 'a');
	else
		rotate_elements(first, 'a');
}

/*
	1 cas possible :
	a c b --> sa(cab) --> rra(abc)
*/
void	case_3(t_Node **first)
{
	swap_elements(first, 'a');
	reverse_elements(first, 'a');
}