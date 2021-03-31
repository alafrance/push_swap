/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 11:14:16 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/31 15:27:23 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi_one_number(char **av, int *is_num, int *size_n)
{
	long nb;
	int neg;

	neg = 1;
	nb = 0;
	if (**av == '-')
	{
		neg = -1;
		(*av)++;			
	}
	while (ft_isdigit(**av) && **av)
	{
		*is_num = 1;
		nb = nb * 10 + **av - '0';
		(*av)++;
		(*size_n)++;
	}
	nb *= neg;
	return (nb);
}

void	pick_number(char *str, t_list **a, t_list **gc)
{
	long	nb;
	int	size_n;
	int	is_num;

	is_num = 0;
	while (*str)
	{
		size_n = 0;
		while (*str == ' ' && *str)
			str++;
		if (!ft_isdigit(*str) && *str != ' ' && *str != '-')
			ft_error(*gc);
		nb = ft_atoi_one_number(&str, &is_num, &size_n);
		if (size_n > 10 || nb > INT_MAX || nb < INT_MIN)
			ft_error(*gc);
		ft_lstadd_back(a, ft_lstnew((void*)nb));
		ft_lstadd_back(gc, ft_lstnew(ft_lstlast(*a)));
	}
	if (!is_num)
		ft_error(*gc);
}

void	   parse_number(int ac, char **av, t_list **a, t_list **gc)
{
	int	i;

	i = 1;
	while (i != ac)
		pick_number(av[i++], a, gc);
}