/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:03:02 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/27 12:44:06 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

/*	
	Mettre les index sur chaque elements
	regarder celui qui est en haut
	si il est 1 ou 2, envoyer a stack B
	sinon mettre le maillon du haut en en bas
	Puis trier sur stack_B si necessaire
	Puis renvoyer stack_B 1 par 1
	Enfin appeler sort_three pour trier la stack_A
*/

void	get_index(t_Node **stack_a)
{
	t_Node *current;
	t_Node *tmp;
	int		i;
	int 	max;
	
	max = 0;
	current = *stack_a;
	while (current != NULL)
	{
		tmp = *stack_a;
		i = 0;
		while (tmp != NULL)
		{
			if (i > max)
			{
				max = i;
				(*stack_a)->height = i;
			}
			current->index = i;
			if (current->data > tmp->data)
				i++;
			tmp = tmp->next;
		}
		current = current->next;
	}
}

/* Cette fonction trie 4 & 5 elements */
void	sort_four_and_five(t_Node **stack_a, t_Node **stack_b)
{
	t_Node *a;
	t_Node *b;

	b = *stack_b;
	a = *stack_a;
	get_index(stack_a);
	while (a != NULL)
	{
		if (a->index == 1 || a->index == 0)
		{
			push_to(stack_a, stack_b);
			a = *stack_a;
		}
		else
			reverse_elements(stack_a);
		printf("pile A : \n");
		print_linked_list(*stack_a);
		printf("pile B : \n");
		print_linked_list(*stack_b);
		a = a->next;
	}
	sort_three(stack_a);
	while (b != NULL)
		push_to(stack_a, stack_b);
	if (a->index != 1)
		swap_elements(stack_a);
}