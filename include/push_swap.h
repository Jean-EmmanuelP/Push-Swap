#ifndef  PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_node {
	int data;
	int is_used;
	int reference;
	int height;
	struct s_node *next;
	struct s_node *prev;
	int index;
} t_Node;

/* src / parsing / checking.c */
int		checking_is_right(int ac, char **av);
int		args_are_numbers(int ac, char **av);
int		args_are_single(int ac, char **av);
int		arg_arent_sorted(int ac, char **av);
int		is_underflow(int ac, char **av);
/* src/ parsing / init.c */
t_Node	*initialize_the_nodes(int ac, char **av);
void	print_linked_list(t_Node *head);
void	print_linked_list(t_Node *head);
void	print_linked_index(t_Node *head);
void	set_the_index(t_Node *head, int ac);
t_Node	*new_elem(char *str);
/* src / instructions / move.c */
void    invertlastTwo(t_Node **head);
void    move_first_element(t_Node **src, t_Node **dest);
void    rotate(t_Node **head);
void    reverse(t_Node **head);
/* src / algorithm */
void 	sort_elements(int ac, t_Node *head_a, t_Node *head_b);
void 	swap(t_Node *head_a);
void 	sort_structure(t_Node **head_a, t_Node **head_b, int ac);
void	swap_elements(t_Node **head_a);
void	sort_three(t_Node **head_a);
void	rotate_elements(t_Node **stack);
void	reverse_elements(t_Node **stack);
void	case_1(t_Node **first, t_Node **second, t_Node **third);
void	case_2(t_Node **first, t_Node **second);
void	case_3(t_Node **first);
void	sort_four_and_five(t_Node **stack_a, t_Node **stack_b, int height);
void	get_index(t_Node **stack_a);
void	push_to(t_Node **a, t_Node **b);
int		ft_stack_size(t_pswap *stack_a);
#endif