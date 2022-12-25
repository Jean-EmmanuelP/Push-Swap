/*Checker les arguments*/
#include "../header/push_swap.h"

int main(int ac, char **av)
{
    if (check_args_and_atoi(ac, av) == TRUE && ac > 1)
    {
        //sort_args(av);
        printf("ARGUMENTS ARE GOOD !");
    }
    else
    {
        printf("Please, prototype like this :\n");
        printf("./push_swap 1 2 8 5 2\n");
    }
}