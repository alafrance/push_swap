/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 20:01:43 by alafranc          #+#    #+#             */
/*   Updated: 2021/04/01 14:04:59 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_list(t_list **lst)
{
	t_list *tmp;

	if (!*lst || !(*lst)->next)
		return ;
	tmp = *lst;
	*lst = (*lst)->next;
	tmp->next = NULL;
	ft_lstadd_back(lst, tmp);
}

void	rotate_a(t_list **a, t_list **b)
{
	(void)b;
	rotate_list(a);
	// ft_printf("ra\n");
}

void	rotate_b(t_list **a, t_list **b)
{
	(void)a;
	rotate_list(b);
	// ft_printf("rb\n");
}

void	rotate_a_b(t_list **a, t_list **b)
{
	rotate_list(a);
	rotate_list(b);
	// ft_printf("rr\n");
}