/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_garbage_collector.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:46:58 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/30 13:56:52 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"

void ft_lstclear_gc(t_list *gc)
{
	(void)gc;
}

void ft_lstadd_back_gc(t_list **lst, void *content, t_list **gc)
{
	t_list *new_elem;
	t_list *gc_elem;

	new_elem = ft_lstnew(content);
	//gc_elem = ft_lstnew(&new_elem);
	//ft_lstadd_front(gc, new_elem);
	ft_lstadd_back(lst, new_elem);
}