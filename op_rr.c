/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:44:59 by fbarrier          #+#    #+#             */
/*   Updated: 2022/01/05 15:44:59 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

t_list	*ft_last_but_one(t_list *list)
{
	t_list	*last_but_one;

	while (list->next->next != NULL)
		list = list->next;
	last_but_one = list;
	return (last_but_one);
}

void	ft_rra(t_list **list_a)
{
	t_list	*tmp;

	tmp = ft_last_but_one(*list_a);
	ft_lstlast(*list_a)->next = *list_a;
	*list_a = tmp->next;
	tmp->next = NULL;
	write(1, "rra\n", 4);
}

void	ft_rrb(t_list **list_b)
{
	t_list	*tmp;

	tmp = ft_last_but_one(*list_b);
	ft_lstlast(*list_b)->next = *list_b;
	*list_b = tmp->next;
	tmp->next = NULL;
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_list **list_a, t_list **list_b)
{
	ft_rra(list_a);
	ft_rrb(list_b);
}
