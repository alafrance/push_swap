/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_garbage_collector.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:46:58 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/31 15:09:00 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"

void	*malloc_gc(t_list **gc, size_t size)
{
	void	*malloc_ptr;
	t_list *new_elem;

	malloc_ptr = malloc(size);
	if (!malloc_ptr)
		exit(EXIT_FAILURE);
	ft_lstadd_front(gc, ft_lstnew(malloc_ptr));
	return (malloc_ptr);
}

void	ft_strdup_gc(t_list **gc, char **dest, char *src)
{
	*dest = ft_strdup(src);
	if (!dest)
		ft_error(*gc);
	ft_lstadd_back(gc,  ft_lstnew(*dest));
}