/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 11:47:29 by alafranc          #+#    #+#             */
/*   Updated: 2021/04/20 11:20:17 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(t_list *gc)
{
	ft_printf("Error\n");
	ft_lstclear(&gc, free);
	exit(EXIT_FAILURE);
	return (0);
}
