/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:18:27 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/14 17:01:05 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

/*
sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr
*/

/* SA : invertit les deux derniers elements du tableau A */
/* SB : intervertit les deux derniers elements du tableau B */
/* SS : intervertit les deux derniers elements des tableaux A & B */
/* Mettre en argument soit pile_a , soit pile_b */
void    invertlastTwo(t_Node **head)
{
    if (!(*head) || !(*head)->next || !(*head)->next->next)
        return ;
    t_Node *first = *head;
    t_Node *second = (*head)->next;
    t_Node *third = second->next;

    first->next = third;
    first->prev = second;
    second->next = first;
    second->prev = NULL;
    if (third)
        third->prev = first;
    *head = second;
}

/* PA : prends le 1er elements de B pour le mettre sur A */
/* PB : prends le 1er elements de A pour le mettre sur B */
void    move_first_element(t_Node **src, t_Node **dest)
{
    t_Node *first = *src;
    *src = first->next;

    if (*dest == NULL)
    {
        first->next = NULL;
        //(*dest)->prev = first;
    }
    first->next = *dest;
    *dest = first;
}

/* RA : decale tout les elements vers la gauche (premier devient dernier)
(pile A) */
/* RB : decale tout les elements vers la gauche (premier devient dernier)
(pile B) */
/* RR : decale tout les elements vers la gauche (premier devient dernier)
(pile A & B) */
void    rotate(t_Node **head)
{
    if (*head == NULL || (*head)->next == NULL)
        return ;
    t_Node *current;
    t_Node *first;
    t_Node *new_first;
    first = *head;
    new_first = first->next;
    *head = new_first;
    first->next = NULL;
    current = new_first;
    while (current->next != NULL)
        current = current->next;
    current->next = first;
}
/* RRA : decale tout les elements vers la droite (dernier devient premier)
(pile A) */
/* RRB : decale tout les elements vers la droite (dernier devient premier)
(pile B) */
/* RRR : decale tout les elements vers la droite (dernier devient premier)
(pile A & B) */
void    reverse(t_Node **head)
{
    if (*head == NULL || (*head)->next == NULL)
        return ;
    t_Node *current = *head;
    t_Node *last;
    while (current->next != NULL)
        current = current->next;
    last = current;
    last->prev->next = NULL;
    last->next = *head;
    *head = last;
}


