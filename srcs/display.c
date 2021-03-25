/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:07:58 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/25 15:25:55 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void display_stack(t_list *a, t_list *b)
{
	if (!a || !b)
		return ;
	int size_n;
	ft_printf("/*---------------|---------------*\\\n");
	//while (a->next != NULL || b->next != NULL)
	//{
		ft_printf("\033[0;32m%d\033[0m\n", a->content);
		a = a->next;
		b = b->next;
		// ft_printf("\033[0;31m"); //Set the text to the color red
		// ft_printf(“Hello\n”); //Display Hello in red
		// ft_printf(“\033[0m”);
	//}
}