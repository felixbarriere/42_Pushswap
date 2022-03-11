/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:29:42 by fbarrier          #+#    #+#             */
/*   Updated: 2022/01/10 16:26:05 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_bits_nmb(t_list **list_a)
{
	t_list	*tmp;
	int		max;
	int		bits_nmb;

	tmp = *list_a;
	max = tmp->index;
	bits_nmb = 0;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	while ((max >> bits_nmb) != 0)
		bits_nmb++;
	return (bits_nmb);
}

void	ft_radix(t_list **list_a, t_list **list_b, t_list *tmp)
{
	int			i;
	int			j;
	int			size;
	int			max_bits;

	i = 0;
	tmp = *list_a;
	size = ft_lstsize(*list_a);
	max_bits = get_bits_nmb(list_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			tmp = *list_a;
			if (((tmp->index >> i) & 1) == 1)
				ft_ra(list_a);
			else
				ft_pb(list_a, list_b);
		}
		while (ft_lstsize(*list_b) != 0)
			ft_pa(list_a, list_b);
		i++;
	}
}
