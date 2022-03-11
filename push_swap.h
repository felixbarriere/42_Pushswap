/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:07:07 by fbarrier          #+#    #+#             */
/*   Updated: 2022/01/12 14:33:12 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct p_list
{
	int				content;
	int				index;
	struct p_list	*next;
}	t_list;

int		ft_check_error(t_list **list_a, t_list **start);
t_list	**ft_fill_pile_a(int ac, char **av, t_list **list_a);
t_list	**ft_fill_several_str(int ac, char **av, t_list **list_a);
t_list	**ft_fill_one_str(char **av, t_list **list_a);
int		ft_lstsize(t_list *lst);
t_list	**ft_find_index(t_list **list_a, t_list **start, int len);
void	ft_sort_three(t_list **list_a, int ac);
void	ft_sort_four(t_list **list_a, t_list **list_b, int ac);
void	ft_sort_five(t_list **list_a, t_list **list_b, int ac);
void	ft_radix(t_list **list_a, t_list **list_b, t_list *start);

/* Libft */
t_list	*ft_lstnew(int nb, int index);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstadd_front(t_list **alst, t_list *new);
long	ft_atol(char *str, t_list**list_a);
char	**ft_split(char *s, char c);
void	ft_free(t_list *list_a);

/* Operators */
void	ft_sa(t_list **list_a);
void	ft_sb(t_list **list_b);
void	ft_ss(t_list **list_a, t_list **list_b);
void	ft_ra(t_list **list_a);
void	ft_rb(t_list **list_a);
void	ft_rr(t_list **list_a, t_list **list_b);
void	ft_rra(t_list **list_a);
void	ft_rrb(t_list **list_b);
void	ft_rrr(t_list **list_a, t_list **list_b);
void	ft_pa(t_list **list_a, t_list **list_b);
void	ft_pb(t_list **list_a, t_list **list_b);

#endif