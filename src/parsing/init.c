/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:02:52 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/27 12:09:35 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

t_Node	*new_elem(char *str)
{
	t_Node	*new_node;

	new_node = (t_Node *)malloc(sizeof(t_Node));
	if (!str)
		return (NULL);
	if (!new_node)
		return (NULL);
	new_node->data = ft_atoi(str);
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

t_Node	*initialize_the_nodes(int ac, char **av)
{
	t_Node	*head;
	t_Node	*new_node;
	int		i;

	head = NULL;
	new_node = NULL;
	i = 1;
	while (i < ac)
	{
		if (!new_node)
		{
			new_node = new_elem(av[i++]);
			if (!new_node)
				return (NULL);
			head = new_node;
		}
		new_node->next = new_elem(av[i++]);
		new_node->next->prev = new_node;
		new_node = new_node->next;
	}
	return (head);
}

void	print_linked_list(t_Node *head)
{
	t_Node	*current;

	current = head;
	while (current != NULL)
	{
		printf("%d->", current->data);
		current = current->next;
	}
	printf("NULL\n");
}

void	print_linked_index(t_Node *head)
{
	t_Node	*current;

	current = head;
	while (current != NULL)
	{
		printf("%d->", current->index);
		current = current->next;
	}
	printf("NULL\n");
}
