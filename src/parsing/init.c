/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:24:02 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/11 23:13:02 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"
#include "libft.h"

/* This function puts the arguments into a board */
int *put_in_board_arguments(int ac, char **av)
{
    int i;
    int *pile_une;
    i = 0;
    pile_une = malloc(sizeof(int) * (ac - 1));
    while (i + 1 <= ac - 1)
    {
        pile_une[i] = ft_atoi(av[i + 1]);
        i++;
    }
    return (pile_une);
}

int *convert_tab_into_list(int *board, int *list)
{
    int i;
    
    i = 0;
    while (i <= ac - 1)
    {
        ft_lstadd_back(t_list **list, t_list *new)
    }
}

/* This function check is the tab is already sorted */
int is_tab_sorted(int *tab, int height)
{
    int i;

    i = 0;
    while (i < height - 1)
    {
        if (tab[i] > tab[i + 1])
            return (false);
        i++;
    }
    return (true);
}

int    *set_the_index(int *tab, int *sorted_tab, int ac)
{
    int *sorted;
    
    sorted = copy_the_map(tab, sorted_tab, ac);
    return (sorted);
}
/*This function copy the map */
int    *copy_the_map(int *tab, int *sorted_tab, int ac)
{
    int i;
    
    sorted_tab = malloc(sizeof(int) * (ac - 1));
    i = 0;
    
    while (i < ac - 1)
    {
        
        sorted_tab[i] = tab[i];
        i++;
    }
    return (sorted_tab);
}
/* This function sort the list in a copy */
void    sort_board(int *tab, int ac)
{
    int i;
    int j;
    int tmp;

    i = 0;
    while (i < ac - 1)
    {
        j = 0;
        while (j < ac - 1)
        {
            if (tab[j] < tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}
