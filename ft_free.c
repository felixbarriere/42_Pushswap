/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:51:45 by fbarrier          #+#    #+#             */
/*   Updated: 2022/01/12 14:33:11 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_list *list_a)
{
	t_list	*tmp;

	while (list_a)
	{
		tmp = list_a->next;
		free(list_a);
		list_a = tmp;
	}
}
