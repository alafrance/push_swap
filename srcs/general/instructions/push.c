/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:59:35 by alafranc          #+#    #+#             */
/*   Updated: 2021/04/02 11:33:50 by alafranc         ###   ########lyon.fr   */
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

void push_a(t_list **a, t_list **b, int is_print)
{
	push_list(a, b);
	if (is_print)
		ft_printf("pa\n");
}

void push_b(t_list **a, t_list **b, int is_print)
{
	push_list(b, a);
	if (is_print)
		ft_printf("pb\n");
}