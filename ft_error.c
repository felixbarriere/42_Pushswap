/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 10:08:55 by fbarrier          #+#    #+#             */
/*   Updated: 2022/01/12 14:33:13 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_doublon(t_list **list_a)
{
	t_list	*copy;

	while (*list_a != NULL)
	{	
		copy = (*list_a)->next;
		while (copy != NULL)
		{
			if (((*list_a)->content) == (copy->content))
				return (0);
			copy = copy->next;
		}
		*list_a = (*list_a)->next;
	}
	return (1);
}

static int	ft_is_sorted(t_list **list_a)
{
	t_list	*copy;

	copy = *list_a;
	while ((copy != NULL) && (copy)->next != NULL)
	{
		if (((copy)->content) < ((copy)->next->content))
			copy = (copy)->next;
		else
			return (1);
	}
	return (0);
}

int	ft_check_error(t_list **list_a, t_list **start)
{
	if ((*list_a)->next == NULL)
	{
		ft_free(*list_a);
		return (0);
	}
	if (ft_is_sorted(list_a) == 0)
	{
		ft_free(*list_a);
		return (0);
	}
	else if (ft_doublon(list_a) == 0)
	{
		write (2, "Error\n", 6);
		*list_a = *start;
		ft_free(*list_a);
		return (0);
	}
	list_a = start;
	return (1);
}
