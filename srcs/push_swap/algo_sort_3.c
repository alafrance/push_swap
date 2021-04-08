/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:13:22 by alafranc          #+#    #+#             */
/*   Updated: 2021/04/08 13:06:11 by alafranc         ###   ########lyon.fr   */
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
		if ((*lst)->content > ft_lstlast(*lst)->content
			&& (*lst)->content > (*lst)->next->content)
			rotate_a(lst, NULL, 1);
		if (ft_lstlast(*lst)->content < (*lst)->next->content)
			reverse_rotate_a(lst, NULL, 1);
		if ((*lst)->content > (*lst)->next->content)
			swap_a(lst, NULL, 1);
	}
}
