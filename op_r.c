/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:44:57 by fbarrier          #+#    #+#             */
/*   Updated: 2022/01/05 15:44:57 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list **list_a)
{
	t_list	*tmp;

	tmp = *list_a;
	*list_a = (*list_a)->next;
	ft_lstadd_back(list_a, tmp);
	tmp->next = NULL;
	write(1, "ra\n", 3);
}

void	ft_rb(t_list **list_b)
{
	t_list	*tmp;

	tmp = *list_b;
	*list_b = (*list_b)->next;
	ft_lstadd_back(list_b, tmp);
	tmp->next = NULL;
	write(1, "rb\n", 3);
}

void	ft_rr(t_list **list_a, t_list **list_b)
{
	ft_ra(list_a);
	ft_rb(list_b);
}
