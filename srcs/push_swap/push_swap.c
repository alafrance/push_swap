/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:27:49 by alafranc          #+#    #+#             */
/*   Updated: 2021/04/06 18:30:00 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_sort_3(int count, t_list **lst)
{
	if (count == 1)
		return ;
	if (count == 2)
	{
		if ((*lst)->content > (*lst)->next->content)
			swap_a(lst, NULL, 1);
	}
	if (count == 3)
	{	
		if ((*lst)->content > ft_lstlast(*lst)->content && (*lst)->content > (*lst)->next->content)
			rotate_a(lst, NULL, 1);
		if (ft_lstlast(*lst)->content < (*lst)->next->content)
			reverse_rotate_a(lst, NULL, 1);
		if ((*lst)->content > (*lst)->next->content)
			swap_a(lst, NULL, 1);
	}
}

int		ft_minimum_number(t_list *a)
{
	int min;
	int index;
	int index_r;

	index = 0;
	index_r = 0;
	min = (int)a->content;
	while (a)
	{
		index++;
		if ((int)a->content < min)
		{
			index_r = index;
			min = (int)a->content;
		}	
		a = a->next;
	}
	return (index_r);
}

void	algo_sort_5(int count, t_list **a, t_list **b)
{
	int min_i;
	int lstsize;

	lstsize = ft_lstsize(*a);
	min_i = ft_minimum_number(*a);
	dprintf(1, "%d\n", min_i);
	
	if (min_i > lstsize / 2)
		while (ft_minimum_number(*a))
			reverse_rotate_a(a, b, 1);
	else
		while (ft_minimum_number(*a))
			rotate_a(a, b, 1);
	push_b(a, b, 1);
	// while (!ft_lst_is_sort_simplify(*a))
	// {
		// if ((*a)->content > (*a)->next->content)
			// swap_a(a, b, 1);
		// 
	// }
}

void	algo_sort(t_list **a, t_list **b)
{
	ft_printf("not done yet\n");
}

void	push_swap(t_list **a, t_list **b, t_list **gc)
{
	int count;
	
	count = ft_lstsize(*a);
	if (count <= 3)
		algo_sort_3(count, a);
	else if (count <= 5)
		algo_sort_5(count, a, b);
	else
		algo_sort(a, b);
}