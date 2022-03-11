/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:44:59 by fbarrier          #+#    #+#             */
/*   Updated: 2022/01/10 15:05:45 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**ft_find_index(t_list **list_a, t_list **start, int len)
{
	int		inf;
	int		index;
	t_list	*copy;

	copy = *list_a;
	inf = 0;
	while (*list_a != NULL)
	{
		while (copy != NULL)
		{
			if ((*list_a)->content < copy->content)
				inf++;
			copy = copy->next;
		}	
		index = len - inf - 1;
		(*list_a)->index = index;
		copy = *start;
		inf = 0;
		*list_a = (*list_a)->next;
	}
	*list_a = *start;
	return (list_a);
}
