/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:18:27 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/11 20:32:57 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"
/*
sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr
*/

/* SA : invertit les deux derniers elements du tableau A */
/* SB : intervertit les deux derniers elements du tableau B */
/* SS : intervertit les deux derniers elements des tableaux A & B */
/* PA : prends le 1er elements de B pour le mettre sur A */
/* PB : prends le 1er elements de A pour le mettre sur B */
/* RA : decale tout les elements vers la gauche (premier devient dernier)
(pile A) */
/* RB : decale tout les elements vers la gauche (premier devient dernier)
(pile B) */
/* RR : decale tout les elements vers la gauche (premier devient dernier)
(pile A & B) */
/* RRA : decale tout les elements vers la droite (dernier devient premier)
(pile A) */
/* RRB : decale tout les elements vers la droite (dernier devient premier)
(pile B) */
/* RRR : decale tout les elements vers la droite (dernier devient premier)
(pile A & B) */
/*void    swap(int *tab, int ac, char cas)
{
    int tmp;

    if (cas & 1)
    {
        tmp = tab[0];
        tab[pos] = tab[pos + 1];
        tab[pos + 1] = tmp;
    }
    if (cas & 2)
    {
        tmp = tab[]
        tab[pos] = tab[pos + 1];
        tab[pos] = tmp;
    }
}*/
