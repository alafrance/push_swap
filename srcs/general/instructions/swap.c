/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:57:57 by alafranc          #+#    #+#             */
/*   Updated: 2021/04/01 14:05:24 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	swap_list(t_list **lst)
{
	void *tmp;
	if (!*lst || !(*lst)->next)
		return ;
	tmp = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = tmp;
}

void swap_a(t_list **a, t_list **b)
{
	(void)b;
	swap_list(a);
	// ft_printf("sa\n");
}

void swap_b(t_list **a, t_list **b)
{
	(void)a;
	swap_list(b);
	// ft_printf("sb\n");
}

void swap_a_b(t_list **a, t_list **b)
{
	swap_list(a);
	swap_list(b);
	// ft_printf("ss");
}