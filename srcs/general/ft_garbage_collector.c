/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_garbage_collector.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:46:58 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/31 00:17:42 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"

void	ft_lstclear_gc(t_list **gc)
{
	t_list *begin;

	begin = *gc;
	while (*gc)
	{
		ft_lstdelone((t_list*)(*gc)->content, del);
		(*gc) = (*gc)->next;
	}
}

void	ft_lstadd_back_gc(t_list **lst, void *content, t_list **gc)
{
	t_list *new_elem;

	new_elem = ft_lstnew(content);
	if (!new_elem)
		ft_error(*gc);
	ft_lstadd_back(lst, new_elem);
	ft_lstadd_front(gc, ft_lstnew(&new_elem));
}

void	malloc_gc(t_list *gc, void **malloc, size_t count, size_t size)
{
	if (!(ft_nalloc_void(malloc, count, size)))
		ft_error(gc);
	ft_lstadd_front(&gc, ft_lstnew(&malloc));
}

void	ft_print_garbage_collector(t_list *gc)
{
	while (gc)
	{
		ft_printf("%d", (int)gc->content);
		gc = gc->next;
	}
}