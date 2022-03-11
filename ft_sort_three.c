/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:58:00 by fbarrier          #+#    #+#             */
/*   Updated: 2022/01/12 14:33:13 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_three2(t_list **list_a, int v1, int v2, int v3)
{	
	if ((v1 > v2) && (v1 > v3) && (v2 > v3))
	{
		ft_ra(list_a);
		ft_sa(list_a);
	}
	else if ((v3 < v2) && (v3 > v1) && (v2 > v1))
	{
		ft_sa(list_a);
		ft_ra(list_a);
	}
	else if ((v1 > v2) && (v1 > v3) && (v2 < v3))
		ft_ra(list_a);
	else if ((v1 > v2) && (v1 < v3) && (v2 < v3))
		ft_sa(list_a);
	else if ((v1 < v2) && (v1 > v3) && (v2 > v3))
		ft_rra(list_a);
}

static void	ft_name_index(t_list **list_a)
{
	int	value_1;
	int	value_2;
	int	value_3;

	value_1 = (*list_a)->content;
	value_2 = (*list_a)->next->content;
	value_3 = (*list_a)->next->next->content;
	ft_sort_three2(list_a, value_1, value_2, value_3);
}

void	ft_sort_three(t_list **list_a, int ac)
{
	if (ac == 2)
	{
		if ((*list_a)->index > (*list_a)->next->index)
			ft_sa(list_a);
	}
	else if (ac == 3)
		ft_name_index(list_a);
}
