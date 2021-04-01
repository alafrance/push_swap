/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_is_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:06:20 by alafranc          #+#    #+#             */
/*   Updated: 2021/04/01 14:15:43 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"

int		ft_lst_is_sort(t_list *lst)
{
	int big;
	
	if (!lst)
		return (1);
	big = (int)lst->content;
	while (lst)
	{
		if (big > lst->content)
			return (0);
		big = lst->content;
		lst = lst->next;
	}
	return (1);
}