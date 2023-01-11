/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrama <jperrama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 06:13:26 by jperrama          #+#    #+#             */
/*   Updated: 2023/01/11 20:19:21 by jperrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header/push_swap.h"

/* (1) Loop threw each argument to see if it's a number or not 
then transform it in int */
int	check_args_and_atoi(int ac, char **av)
{
	int tmp;

	tmp = ac;
	while (--tmp > 0)
	{
		if (av[tmp][0] == '\0')
			return (false); 
		if (ft_int_checking(av[tmp]) == false)
			return (false);
	}
	if (ft_duplicate_checking(ac, av) == false)
			return (false);
	return (true);
}

/* (2) Checking if it's a number or not */
int	ft_int_checking(char *str)
{
	int i;
	int	b;

	i = 0;
	b = false;
	while (str[i])
	{
		if (('0' <= str[i] && str[i] <= '9') 
             || (str[0] == '-' && '0' <= str[i + 1] && str[i + 1] <= '9')) 
		{
			if (b == false && ft_remix_atoi(str) == true)
			{
				b = true;
				i++;
			}
			else
				i++;
		}
        else
            return (false);
	}
    if (no_greater_than_max(str) == true)
        return (true);
    return (false);
}

/* (3) Check if the number is between size_max and size_min */
int	ft_remix_atoi(char *str)
{
	long long int 	sign;
	long long int 	result;
	int     		i;

	i = 0;
	result = 0;
	sign = 1;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
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
	if (INT_MIN <= (result * sign) && (result * sign) <= INT_MAX)
		return (true);
	else
		return (false);
}

/* (4) Check if there is a duplicate somewhere */
int	ft_duplicate_checking(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac)
		{
			if (j != i)
			{
				if (ft_strcmp(av[j], av[i]) == 0)
					return (false);
			}
			j++;
		}
		i++;
	}
	return (true);
}

/* This function check that the arg is not greater than int_(max/min) */
int no_greater_than_max(char *str)
{
    char *cmp;

    cmp = "-2147483648";
    if (ft_strlen(str) > ft_strlen(cmp))
        return (false);
    return (true);
}
