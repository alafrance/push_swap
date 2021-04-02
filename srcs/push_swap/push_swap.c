/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:27:49 by alafranc          #+#    #+#             */
/*   Updated: 2021/04/02 15:33:34 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	algo_sort_3(int count, t_list **a, t_list **b)
{
	if (count == 1)
		return ;
	if (count == 2)
	{
		if ((*a)->content > (*a)->next->content)
			swap_a(a, b, 1);
	}
	if (count == 3)
	{	
		if ((*a)->content > ft_lstlast(*a)->content && (*a)->content > (*a)->next->content)
			rotate_a(a, b, 1);
		if (ft_lstlast(*a)->content < (*a)->next->content)
			reverse_rotate_a(a, b, 1);
		if ((*a)->content > (*a)->next->content)
			swap_a(a, b, 1);
	}
	
}


void	algo_sort_5(int count, t_list **a, t_list **b)
{
	ft_printf("not done yet\n");
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
		algo_sort_3(count, a, b);
	else if (count <= 5)
		algo_sort_5(count, a, b);
	else
		algo_sort(a, b);
}