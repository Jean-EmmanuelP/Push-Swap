#include "libft.h"

int ft_overflow(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i])
    {
        if (s2[i] > s1[i])
            return (true);
        i++;
    }
    return (false);
}