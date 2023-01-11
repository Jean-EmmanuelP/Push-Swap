/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 06:32:46 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/11 23:10:55 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

/*
1. initialiser le tableau A et le tableau B; ✔️
2. creer les mouvements qui vont me permettre de me deplacer entre le tableau A et le tableau B.
->  sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr  
3. creer l'algorithme
*/

int main(int ac, char **av)
{
    int *board_a;
    t_list *list;

    if (check_args_and_atoi(ac, av) == true)
    {
        board_a = put_in_board_arguments(ac, av);
        if (is_tab_sorted(board_a, ac - 1) == true)
        {
          printf("Already sorted");
          return (true);
        }
        
        printf("Let's go");
        convert_tab_into_list(board_a, &list, ac );
        //sorted_tab = set_the_index(tab, sorted_tab, ac);
    }
    else
        printf("Error\n");
}
