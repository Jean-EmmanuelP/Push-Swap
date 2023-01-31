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
	t_Node	*tmp; // tmp est la stack
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
	while ((*stack)->index != the_greater)
	{
		if (pos <= median && ((*stack)->index) != the_greater)
			reverse_elements(stack, 'b'); // premier -> dernier
		else if (pos > median && ((*stack)->index) != the_greater)
			rotate_elements(stack, 'b'); // dernier -> premier
	}
	printf("Stack B : ");
	print_linked_list(*stack);
	printf("\n");
}

/* Cette fonction itere dans B, met le maximum en premiere position puis la push vers A */
void	ft_push_into_a(t_Node **stack_a, t_Node **stack_b)
{
	while (ft_stack_size(*stack_b) > 0)
	{
		if (ft_stack_size(*stack_b) == 1)
		{
			push_to(stack_b, stack_a, 'a');
			if ((*stack_a)->index != 1)
				reverse_elements(stack_a, 'a');
			return ;
		}
		move_to_max(stack_b);
		push_to(stack_b, stack_a, 'a');
	}
}

void	ft_pb_or_ra(t_Node **s_a, t_Node **s_b, int range, int div)
{
	if ((*s_a)->index <= range + div)
	{
		push_to(s_a, s_b, 'b');
		if ((*s_b)->index <= range)
			reverse_elements(s_b, 'b');
	}
	else
		reverse_elements(s_a, 'a');
}

void	sort_big(t_Node **stack_a, t_Node **stack_b, int div)
{
	int	range; // taille totale / division
	int	i; // i est un iterateur
	int	actual_stack_size; // taille de la stack en mouvement
	int	initial_stack_size; // taille de la stack initial

	range = ft_stack_size(*stack_a) / div;
	get_index(stack_a);
	initial_stack_size = ft_stack_size(*stack_a);
	while (range <= initial_stack_size + div) 
	{
		actual_stack_size = ft_stack_size(*stack_a); // taille actuel de la stack
		i = 0;
		while (i < actual_stack_size) // parcourt l'actuel taille de la stack
		{
			ft_pb_or_ra(stack_a, stack_b, range, div);
			i++;
			printf("Stack A : ");
			print_linked_list(*stack_a);
			printf("Stack B : ");
			print_linked_list(*stack_b);
			printf("\n");
		}
		range += div * 2;
	}
	ft_push_into_a(stack_a, stack_b);
}