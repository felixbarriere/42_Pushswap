/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:44:50 by fbarrier          #+#    #+#             */
/*   Updated: 2022/01/05 15:44:50 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*list_a;
	t_list	*list_b;
	t_list	*start;	

	list_a = NULL;
	list_b = NULL;
	if (ft_fill_pile_a(--ac, ++av, &list_a) == NULL)
		return (1);
	start = list_a;
	if (ft_check_error(&list_a, &start) == 0)
		return (1);
	list_a = start;
	ac = ft_lstsize(list_a);
	ft_find_index(&list_a, &start, ac);
	if (ac <= 3)
		ft_sort_three(&list_a, ac);
	else if (ac == 4)
		ft_sort_four(&list_a, &list_b, ac);
	else if (ac == 5)
		ft_sort_five(&list_a, &list_b, ac);
	else if (ac > 5)
		ft_radix(&list_a, &list_b, start);
	ft_free(list_a);
	return (0);
}
