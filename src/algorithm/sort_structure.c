/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_structure.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:59:03 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/26 15:42:16 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	sort_structure(t_Node **head_a, t_Node **head_b, int length)
{
	if (length == 2 && !*head_b)
		swap_elements(head_a, 'a');
	else if (length == 3)
		sort_three(head_a);
	else if (length == 4 || length == 5)
		sort_four_and_five(head_a, head_b, length);
	else if (length <= 100)
		sort_big(head_a, head_b, 10);
	else
		sort_big(head_a, head_b, 25);
}
