/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 11:47:29 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/26 15:55:45 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	del(void * content)
{
	content = NULL;	
}

int		ft_error(t_list *a)
{
	ft_printf("Error\n");
	ft_lstclear(&a, del);	
	exit(EXIT_FAILURE);
	return (0);
}