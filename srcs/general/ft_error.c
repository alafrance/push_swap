/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 11:47:29 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/30 13:47:43 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	del(void * content)
{
	content = NULL;	
}

int		ft_error(t_list *gc)
{
	ft_printf("Error\n");
	ft_lstclear(&gc, del);	
	exit(EXIT_FAILURE);
	return (0);
}