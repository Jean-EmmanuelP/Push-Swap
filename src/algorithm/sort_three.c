/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:58:47 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/26 18:10:17 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

/* echange les deux premiers elements */
void	swap_elements(t_Node **stack, int signature)
{
	t_Node *current;
	t_Node *newHead;
	
	current = *stack;
	newHead = (*stack)->next;
	current->next = newHead->next;
	*stack = newHead;
	newHead->next = current;
	if (signature == 'a')
		write(1, "sa\n", 3);
	else
		write(1, "sb\n", 3);
}

/* 
	dernier devient premier
	bca->NULL devient abc->NULL
*/
void	rotate_elements(t_Node **stack, int signature)
{
	t_Node *current;
	t_Node *newHead;
	t_Node *newLast;
	current = *stack;
	newHead = *stack;
	while (newHead->next)
	{
		newLast = newHead;
		newHead = newHead->next;
	}
	newLast->next = NULL;
	newHead->next = current;
	*stack = newHead;
	if (signature == 'a')
		write(1, "rra\n", 4);
	else
		write(1, "rrb\n", 4);
}

/* 
	premier devient dernier 
	cab->NULL devient abc->NULL
*/
void	reverse_elements(t_Node **stack, int signature)
{
	t_Node *current;
	t_Node *newHead;
	t_Node *newLastHead;

	newHead = (*stack)->next;
	current = *stack;
	newLastHead = *stack;
	while (current->next)
	{
		current = current->next;
	}
	current->next = newLastHead;
	newLastHead->next = NULL;
	*stack = newHead;
	if (signature == 'a')
		write(1, "ra\n", 3);
	else
		write(1, "rb\n", 3);
}

/* 
	Cette fonction pousse le dernier 
	element de la stack dans le haut
	de l'autre stack.
*/
void	push_to(t_Node **a, t_Node **b, int signature)
{
	t_Node *to_push = *a;
	
	*a = (*a)->next;
	to_push->next = *b;
	*b = to_push;
	if (signature == 'a')
		write(1, "pa\n", 3);
	else
		write(1, "pb\n", 3);
}
/*

6 cas :
a b c
c b a --> sa(bca) --> ra(abc)
c a b --> ra(bca) --> ra(abc)
b c a --> ra(abc)
b a c --> sa(abc)
a c b --> sa(cab) --> rra(abc)

*/ 

void	sort_three(t_Node **stack)
{
	t_Node	*first;
	t_Node	*second;
	t_Node	*third;
	
	first = *stack;
	second = first->next;
	third = second->next;
	if ((first->data < second->data && first->data < third->data)
		&& (second->data < third->data))
		return ;
	if ((first->data < second->data && first->data > third->data)
			||(first->data > second->data && first->data < third->data))
		case_2(stack, &second);
	else if (first->data > second->data)
		case_1(stack, &second, &third);
	else
		case_3(stack);
}