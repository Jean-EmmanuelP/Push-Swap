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
	int		index;

	current = *stack_a;
	while (current != NULL)
	{
		index = 0;
		tmp = *stack_a;
		while (tmp != NULL)
		{
			if (current->data > tmp->data)
				index++;
			tmp = tmp->next;
		}
		current->index = index;
		current = current->next;
	}
}

/* Cette fonction trie 4 & 5 elements */
void	sort_four_and_five(t_Node **stack_a, t_Node **stack_b, int height)
{
	t_Node *a;
	t_Node *b;
	int		transfer;

	transfer = 2;
	if (height == 4)
		transfer = 1;
	height = height - transfer;
	get_index(stack_a);
	b = *stack_b;
	a = *stack_a;
	while (transfer > 0)
	{
		if (a->index <= 1)
		{
			push_to(stack_a, stack_b);
			transfer = transfer - 1;
		}
		else
			reverse_elements(stack_a);
		a = *stack_a;
	}
	sort_three(stack_a);
	printf("\n Durant la boucle ");
	int i = 0;
	while (5 - height > 0)
	{
		printf("compteur %d", i++);
		print_linked_list(*stack_a);
		print_linked_list(*stack_b);
		push_to(stack_b, stack_a);
		height = height + 1;
	}
	print_linked_list(b);
	a = *stack_a;
	printf("%d %d", a->data, a->index);
	if (a->index != 0)
	{
		printf("c passe ici chakal");
		swap_elements(stack_a);
	}
}