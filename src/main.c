#include "libft.h"
#include "push_swap.h"
/*
Parsing :
1. Checker les doublons
2. Checker que c'est un integer 
3. Checker que les arguments ne sont pas trie
4. Checker le depassement des INT MAX et INT MIN

Initialisation :
1. Mettre les arguments dans la liste
2. Initialiser avec que des zero la liste
3. Faire les mouvements

Algorithme :
1. Mettre les index
2. Trier pour 3 index;
3. Trier pour 5 index;
*/

int main(int ac, char **av)
{
  if (checking_is_right(ac, av) == true)
  {
    printf("This is good!\n");
    t_Node *pile_a = initialize_the_nodes(ac, av);
    t_Node *pile_b = NULL;
    printf("---\nPile A au debut:\n");
    if (!pile_b)
      print_linked_list(pile_a);
    printf("---\nLes piles apres :\n");
    printf("---\nPile A\n");
    print_linked_list(pile_a);
    set_the_index(pile_a, ac);
    printf("---\nIndex\n");
    print_linked_index(pile_a);
    printf("---\nPile B\n");
    print_linked_list(pile_b);
    return (true);
  }
  printf("Error\n");
  return (false);
}
