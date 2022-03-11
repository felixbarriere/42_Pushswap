/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:45:02 by fbarrier          #+#    #+#             */
/*   Updated: 2022/01/05 15:45:02 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **list_a)
{
	t_list	*tmp;

	tmp = *list_a;
	*list_a = (*list_a)->next;
	tmp->next = (*list_a)->next;
	(*list_a)->next = tmp;
	write(1, "sa\n", 3);
}

void	ft_sb(t_list **list_b)
{
	t_list	*tmp;

	tmp = *list_b;
	*list_b = (*list_b)->next;
	tmp->next = (*list_b)->next;
	(*list_b)->next = tmp;
	write(1, "sb\n", 3);
}

void	ft_ss(t_list **list_a, t_list **list_b)
{
	ft_sa(list_a);
	ft_sb(list_b);
}
