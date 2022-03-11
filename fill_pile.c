/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_pile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:45:05 by fbarrier          #+#    #+#             */
/*   Updated: 2022/01/05 15:45:05 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**ft_fill_pile_a(int ac, char **av, t_list **list_a)
{
	int	ind;

	ind = 0;
	if (ac == 0)
	{
		free(*list_a);
		return (NULL);
	}
	else if (ac >= 1)
	{
		while (ac > ind)
		{
			if (ft_atol(av[ind], list_a) > 2147483647
				|| ft_atol(av[ind], list_a) < -2147483648)
			{	
				write (2, "Error\n", 6);
				ft_free(*list_a);
				return (NULL);
			}
			ft_lstadd_back(list_a, ft_lstnew(ft_atol(av[ind], list_a), ind));
			ind++;
		}		
	}
	return (list_a);
}
