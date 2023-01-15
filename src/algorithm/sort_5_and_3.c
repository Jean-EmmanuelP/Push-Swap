/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_and_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:59:03 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/15 19:52:04 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_elements(int ac, t_Node *head_a, t_Node *head_b)
{
	(void)head_b;
	if (ac == 2)
		sort_two(head_a);
	else if (ac == 3)
		sort_three(head_a, head_b);
}

void swap(t_Node *head_a)
{
	t_Node *first = head_a;
	t_Node *second = head_a->next;
	int tmp = second->data;
	second->data = first->data;
	first->data = tmp;
}
void sort_three(t_Node *head_a, t_Node *head_b)
{
	/* Regarder ou le max est, puis swap en fonction de celui ci */
	/* RA / SA */
}

