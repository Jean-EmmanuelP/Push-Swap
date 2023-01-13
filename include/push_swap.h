#ifndef  PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

/* src / parsing */
int checking_is_right(int ac, char **av);
int args_are_numbers(int ac, char **av);
int args_are_single(int ac, char **av);
int arg_arent_sorted(int ac, char **av);
int is_underflow(int ac, char **av);
#endif
