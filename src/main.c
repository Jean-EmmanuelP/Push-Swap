#include "libft.h"
#include "push_swap.h"
/*
Parsing :
1. Checker les doublons
2. Checker que c'est un integer 
3. Checker que les arguments ne sont pas trie
4. Checker le depassement des INT MAX et INT MIN
*/

int main(int ac, char **av)
{
  if (checking_is_right(ac, av) == true)
  {
    printf("This is good!");
    return (true);
  }
  printf("Error");
  return (false);
}
