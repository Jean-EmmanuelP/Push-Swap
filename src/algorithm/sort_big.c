/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:59:05 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/14 20:00:15 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	move_to_max(t_Node **stack)
{
	t_Node	*tmp;
	int		pos;
	int		median;
	int		the_greater;

	the_greater = ft_stack_size(*stack);
	median = ft_stack_size(*stack) / 2 + ft_stack_size(*stack) % 2;
	tmp = *stack;
	get_position(stack);
	while (tmp->index != the_greater)
		tmp = tmp->next;
	pos = tmp->position;
	while ((*stack)->index != the_greater)
	{
		if (pos <= median && ((*stack)->index) != the_greater)
			reverse_elements(stack, 'b');
		else if (pos > median && ((*stack)->index) != the_greater)
			rotate_elements(stack, 'b');
	}
}

/* Cette fonction itere dans B, met le maximum en premiere position puis la push vers A */
void	ft_push_into_a(t_Node **stack_a, t_Node **stack_b)
{
	while (ft_stack_size(*stack_b) > 0)
	{
		if ((*stack_b)->next == NULL)
		{
			push_to(stack_b, stack_a, 'b');
			reverse_elements(stack_a, 'a');
			return ;
		}
		move_to_max(stack_b);
		push_to(stack_b, stack_a, 'b');
	}
}

void	ft_pb_or_ra(t_Node **s_a, t_Node **s_b, int range, int div)
{
	if ((*s_a)->index <= range + div)
	{
		push_to(s_a, s_b, 'a');
		if ((*s_b)->index <= range)
			reverse_elements(s_b, 'b');
	}
	else
		reverse_elements(s_a, 'a');
}

void	sort_big(t_Node **stack_a, t_Node **stack_b, int div)
{
	int	range;
	int	i;
	int	actual_stack_size;
	int	initial_stack_size;

	range = ft_stack_size(*stack_a) / div;
	get_index(stack_a);
	initial_stack_size = ft_stack_size(*stack_a);
	while (range <= initial_stack_size + div) 
	{
		actual_stack_size = ft_stack_size(*stack_a);
		i = 0;
		while (i < actual_stack_size)
		{
			ft_pb_or_ra(stack_a, stack_b, range, div);
			i++;
		}
		range += div * 2;
	}
	ft_push_into_a(stack_a, stack_b);
}