/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:13:57 by alafranc          #+#    #+#             */
/*   Updated: 2021/04/01 12:52:01 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "general.h"

void	ft_print_struct_int(t_list *lst)
{
	while (lst)
	{
		printf("%d", (int)lst->content);
		lst = lst->next;
	}
}

void	ft_print_struct_str(t_list *lst)
{
	while (lst)
	{
		printf("list_content:%s\n", (char*)lst->content);
		lst = lst->next;
	}
}