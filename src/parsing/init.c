/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:02:52 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/14 21:00:01 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

t_Node	*new_elem(char *str)
{
	t_Node	*new_node = (t_Node*)malloc(sizeof(t_Node));
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
	t_Node *head = NULL;
	t_Node *new_node = NULL;
	int i;
	
	head = NULL;
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
	t_Node *current = head;
	while (current != NULL)
	{
		printf("%d->", current->data);
		current = current->next;
	}
	printf("NULL\n");
}

/* Mettre dans un tableau de int , trier le tableau d'int*/
/* Comparer la position de l'element avec la position du tableau, si = */
/* L'index est l'incrementeur */
void set_the_index(t_Node *head, int ac)
{
	int *array;
	t_Node *current = head;
	t_Node *cmp_value = head;
	int size = 0;
	array = malloc(sizeof(int) * (ac - 1));
	while (current != NULL)
	{
		array[size] =  current->data;
		current = current->next;
		size++;
	}
	int j = 0;
	int k;
	int tmp;
	while (j < size - 1)
	{
		k = 0;
		while (k < size - j - 1)
		{
			if (array[k] > array[k + 1])
			{
				tmp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = tmp;
			}
			k++;
		}
		j++;
	}
	i = 0;
	while ()
}

