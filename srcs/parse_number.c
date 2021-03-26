/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 11:14:16 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/26 16:03:03 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int pick_number(char *av, t_list **a, int *j, int *is_num)
{
	long nb;
	int neg;
	int size_n;
	
	size_n = 0;
	nb = 0;
	neg = 1;
	if (av[*j] == '-')
	{
		neg = -1;
		(*j)++;			
	}
	while (ft_isdigit(av[*j]) && av[*j])
	{
		*is_num = 1;
		nb = nb * 10 + av[*j] - '0';
		(*j)++;
		size_n++;
	}
	if (size_n > 10 || nb > INT_MAX || nb < INT_MIN)
		ft_error(*a);
	nb *= neg;
	return (nb);
}

void	parse_number(int ac, char **av, t_list **a)
{
	int	i;
	int	j;
	int	nb;
	int is_num;

	i = 1;
	while (i != ac)
	{
		is_num = 0;
		j = 0;
		if (ft_strlen(av[i]) != 1)
		{
			while (av[i][j])
			{
				if (!ft_isdigit(av[i][j]) && av[i][j] != ' ' && av[i][j] != '-')
					ft_error(*a);
				while (av[i][j] == ' ' && av[i][j])
					j++;
				nb = pick_number(av[i], a, &j, &is_num);
				ft_lstadd_front(a, ft_lstnew((void*) (size_t)nb));
			}
			if (!is_num)
				ft_error(*a);
		}
		else
			ft_lstadd_front(a, ft_lstnew((void *) (size_t)ft_atoi(av[i])));
		i++;
	}
}