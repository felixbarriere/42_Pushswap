/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:16:56 by fbarrier          #+#    #+#             */
/*   Updated: 2022/01/10 16:28:36 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_min(t_list *list_a)
{
	t_list	*min;
	t_list	*tmp;

	min = list_a;
	tmp = list_a;
	while (tmp)
	{
		if (min->content > tmp->content)
			min = tmp;
		tmp = tmp->next;
	}
	return (min->content);
}

void	ft_sort_four(t_list **list_a, t_list **list_b, int ac)
{
	int	min;

	min = ft_find_min(*list_a);
	if ((*list_a)->content != min)
	{
		while ((*list_a)->content > min)
		{
			if ((*list_a)->next->content == min)
				ft_sa(list_a);
			else
				ft_rra(list_a);
		}
		ft_pb(list_a, list_b);
		ft_sort_three(list_a, (ac - 1));
		ft_pa(list_a, list_b);
	}
	else
	{
		ft_pb(list_a, list_b);
		ft_sort_three(list_a, (ac - 1));
		ft_pa(list_a, list_b);
	}
}

void	ft_sort_five(t_list **list_a, t_list **list_b, int ac)
{
	int	min;

	while (ac-- > 3)
	{
		min = ft_find_min(*list_a);
		if ((*list_a)->content != min)
		{		
			while ((*list_a)->content > min)
			{
				if ((*list_a)->next->content == min)
					ft_sa(list_a);
				else
					ft_rra(list_a);
			}
			ft_pb(list_a, list_b);
		}
		else
			ft_pb(list_a, list_b);
	}
	ft_sort_three(list_a, 3);
	ft_pa(list_a, list_b);
	ft_pa(list_a, list_b);
}
