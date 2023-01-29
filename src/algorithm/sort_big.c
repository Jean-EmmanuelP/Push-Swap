/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100_and_500.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:59:05 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/14 20:00:15 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

/* Cette fonction permet de mesurer la taille de la stack */
int	ft_stack_size(t_pswap *stack_a)
{
	int		i;
	t_pswap	*tmp;

	i = 0;
	tmp = stack_a;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	move_to_max(t_pswap **stack)
{
	t_pswap	*tmp; // tmp est la stack
	int		pos; // position (1->n)
	int		median; // mediane (point milieu d'un jeu de donnee 50% (number) 50%)
	int		the_greater; // le plus grand element de la stack

	the_greater = ft_stack_size(*stack);
	median = ft_stack_size(*stack) / 2 + ft_stack_size(*stack) % 2;
	tmp = *stack;
	get_position(stack); // prendre les positions de chaque maillon
	while (tmp->index != the_greater) // permet de trouver le plus grand de la stack
		tmp = tmp->next; // on itere jusqu'a trouver le plus grand de la stack
	pos = tmp->position; // on prends la position actuel de tmp
	while ((*stack)->index != the_greater) // 
	{
		if (pos <= median && ((*stack)->index) != the_greater)
			do_rb(stack); // premier -> dernier
		else if (pos > median && ((*stack)->index) != the_greater)
			do_rrb(stack); // dernier -> premier
	}
}


void	ft_push_into_a(t_pswap **stack_a, t_pswap **stack_b)
{
	while (ft_stack_size(*stack_b) > 0) // tant que il y a des elements dans la stack
	{
		move_to_max(stack_b); // 
		do_pa(stack_b, stack_a);
	}
}

/*
    Cette fonction effectue des choix en fonction d'une situation 
    PS: ceci est une constatation, et non une explication du pourquoi
    du comment 
*/
void	ft_pb_or_ra(t_pswap **s_a, t_pswap **s_b, int range, int div)
{
	if ((*s_a)->index <= range + div) // 
	{
		do_pb(s_a, s_b);
		if ((*s_b)->index <= range)
			do_rb(s_b);
	}
	else
		do_ra(s_a);
}

void	ft_sort_big(t_pswap **stack_a, t_pswap **stack_b, int div)
{
	int	range; // taille totale / division
	int	i; // i est un iterateur
	int	actual_stack_size; // taille de la stack en mouvement
	int	initial_stack_size; // taille de la stack initial

	range = ft_stack_size(*stack_a) / div;
	ft_get_index(*stack_a);
	initial_stack_size = ft_stack_size(*stack_a);
	while (range <= initial_stack_size + div) 
	{
		actual_stack_size = ft_stack_size(*stack_a); // taille actuel de la stack
		i = 0;
		while (i < actual_stack_size) // parcourt l'actuel taille de la stack
		{
			ft_pb_or_ra(stack_a, stack_b, range, div); // 
			i++;
		}
		range += div * 2;
	}
	ft_push_into_a(stack_a, stack_b);
}