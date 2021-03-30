/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:27:42 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/30 23:50:28 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
int main(int ac, char **av)
{
	t_list *a;
	t_list *b;
	t_list *gc;

	a = NULL;
	b = NULL;
	gc = NULL;
	if (ac == 1)
		ft_error(gc);
	parse_number(ac, av, &a, &gc);
	//ft_lstclear_gc(&gc);
	// printf()
	// while (1);
	// ft_print_garbage_collector(gc);
	display_stack(a, b);
}