/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:54:04 by fbarrier          #+#    #+#             */
/*   Updated: 2022/01/10 15:15:44 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	if (!*list_b)
		return ;
	tmp = *list_b;
	*list_b = (*list_b)->next;
	tmp->next = NULL;
	ft_lstadd_front(list_a, tmp);
	write(1, "pa\n", 3);
}

void	ft_pb(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	if (!*list_a)
		return ;
	tmp = *list_a;
	*list_a = (*list_a)->next;
	tmp->next = NULL;
	ft_lstadd_front(list_b, tmp);
	write(1, "pb\n", 3);
}
