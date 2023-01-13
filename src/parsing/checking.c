#include "libft.h"
#include "push_swap.h"

int args_are_numbers(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            if (ft_isdigit(av[i][j], j) != 1024)
                return(false);
            j++;
        }
        i++;
    }
    return (true);
}

int args_are_single(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    while (i < ac)
    {
        j = i + 1;
        while (j < ac)
        {
            if (ft_strcmp(av[i], av[j]) == 0)
                return (false);
            j++;
        }
        i++;
    }
    return (true);
}

int arg_arent_sorted(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    while (i < ac)
    {
        j = i + 1;
        while (j < ac)
        {
            if (ft_atoi(av[i]) > ft_atoi(av[j]))
                return (true);
            j++;
        }
        i++;
    }
    return (false);
}

int is_underflow(int ac, char **av)
{
    int i;

    i = 1;
    while (i < ac)
    {
        if (av[i][0] == '-')
        {
            if (ft_strlen(av[i]) > 11)
                return (false);
            else if (ft_strlen(av[i]) == 11)
            {
                if (ft_overflow("-2147483648", av[i]) == true)
                    return (false);
            }
        }
        else
        {
            if (ft_strlen(av[i]) > 10)
                return (false);
            else if (ft_strlen(av[i]) == 10)
            {                
                if (ft_overflow("2147483647", av[i]) == true)
                    return (false);
            }
        }
        i++;
    }
    return (true);
}

int checking_is_right(int ac, char **av)
{
    if (args_are_numbers(ac, av) == true)
    {
        if (args_are_single(ac, av) == true)
            if (arg_arent_sorted(ac, av) == true)
                if (is_underflow(ac, av) == true)
                    return (true);
    }
    return (false);
}

