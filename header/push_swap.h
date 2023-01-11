#ifndef  PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stdint.h>
# include <stddef.h>
# include <stdbool.h>
# define FALSE 0
# define TRUE 1
# define P INT_MAX

typedef struct s_element {
	int nbr;
	int pos;
	struct s_element *next;
}	t_element;

typedef struct s_list {
	t_element *first;
	int nb_elem;
}	t_list;

/* from : source/checking */
int    *set_the_index(int *tab, int *sorted_tab, int ac);
int    *copy_the_map(int *tab, int *sorted_tab, int ac);
void    sort_board(int *tab, int ac);
int     is_tab_sorted(int *tab, int height);
int    *put_in_board_arguments(int ac, char **av);
int		*init_board_b(int ac)
int 	check_args_and_atoi(int ac, char **av);
int		ft_remix_atoi(char *str);
int		ft_atoi(const char *str);
int 	ft_int_checking(char *str);
int		ft_duplicate_checking(int ac, char **av);
int 	ft_strcmp(const char *s1, const char *s2);
int     no_greater_than_max(char *str);
int 	ft_strlen(const char *str);
/* from : source/sort */
#endif
