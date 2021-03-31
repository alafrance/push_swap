/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:13:57 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/31 15:28:05 by alafranc         ###   ########lyon.fr   */
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
		printf("%s", (char*)lst->content);
		lst = lst->next;
	}
}