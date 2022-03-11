/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 12:38:00 by fbarrier          #+#    #+#             */
/*   Updated: 2022/01/11 19:53:33 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**ft_check_number_size(const char *str, t_list **list_a)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i > 19)
		return (NULL);
	return (list_a);
}

long	ft_atol2(char *str)
{
	long	res;
	int		sign;

	res = 0;
	sign = 1;
	while ((*str == ' ') || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	if (*str < '0' || *str > '9')
		return (2147483648);
	while (*str >= '0' && *str <= '9')
	{
		res = 10 * res + (*str - '0');
		str++;
	}
	if (*str && (*str < '0' || *str > '9'))
		return (2147483648);
	return (res * sign);
}

long	ft_atol(char *str, t_list **list_a)
{
	long	res;

	if (ft_check_number_size(str, list_a) == NULL)
		return (2147483648);
	res = ft_atol2(str);
	return (res);
}
