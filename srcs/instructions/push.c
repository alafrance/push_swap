/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:59:35 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/27 13:19:45 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_list(t_list **add, t_list **remove)
{
	t_list *tmp;

	if (!*remove)
		return ;
	tmp = *remove;
	if ((*remove)->next)
		*remove = (*remove)->next;
	else
		*remove = NULL;
	if (*add)
		tmp->next = *add;
	else
		tmp->next = NULL;
	*add = tmp;
}

void push_a(t_list **a, t_list **b)
{
	push_list(a, b);
	ft_printf("pa\n");
}

void push_b(t_list **a, t_list **b)
{
	push_list(b, a);
	ft_printf("pb\n");
}