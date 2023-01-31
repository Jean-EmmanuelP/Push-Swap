/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:35:32 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/26 14:26:34 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

/*
1. Faire le parsing des elements fait
2. Mettre les elements dans une structure fait
3. Mettre les index sur chaque elements
4. Mettre les positions sur chaque elements
5. Faire l'algorithme de tri
6. Free all
*/

int main(int ac, char **av)
{
  t_Node *struct_a;
  t_Node *struct_b;
  /*
  printf("number of elements : %d\n", ac - 1);
  */
  if (checking_is_right(ac, av) == true)
  {
    struct_a = initialize_the_nodes(ac, av);
    struct_b = NULL;
    sort_structure(&struct_a, &struct_b, ac - 1);
    /*
    printf("---\nPile A au debut:\n");
    print_linked_list(struct_a);
    printf("\n---\nPile A a la fin:\n");
    print_linked_list(struct_a);
    */
    return (true);
  }
  write(2, "Error\n", 6);
  return (false);
}
