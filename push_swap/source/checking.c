#include "../header/push_swap.h"

/* Visualisation */
int ft_int_checking(const char *str);
int check_args_and_atoi(int ac, char **av);

/* (1) Loop threw each argument to see if it's a number or not 
*   then transform it in int */
int check_args_and_atoi(int ac, char **av)
{
    int i = 1;
    while (i < ac)
    {
        if (ft_int_checking(av[i]) == TRUE)
            i++;
        else
            return (FALSE);
    }
    return (TRUE);
}

/* (2) Checking if it's a number or not */
int ft_int_checking(const char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if ('0' <= str[i] && str[i] <= '9')
            i++;
        else
            return (FALSE);            
    }
    ft_atoi(str);
    return (TRUE);
}

/* Convert string into integer */
int ft_atoi(const char *str)
{
    int sign;
    int result;
    int i;

    i = 0;
    result = 0;
    sign = 1;
    while ((9 <= str[i] && str[i] <= 13 || str[i] == 32))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while ('0' <= str[i] && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - 48);
        i++;
    }
    return (result * sign);
}
