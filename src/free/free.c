/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:29:06 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/11 20:29:20 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_all(t_Node *stack_a, t_Node *stack_b)
{
	t_Node		*tmp;

	while (stack_a)
	{
		tmp = stack_a;
		stack_a = stack_a->next;
		free(tmp);
	}
	while (stack_b)
	{
		tmp = stack_b;
		stack_b = stack_b->next;
		free(tmp);
	}
}
