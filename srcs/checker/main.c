/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:27:46 by alafranc          #+#    #+#             */
/*   Updated: 2021/04/02 14:46:18 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "checker.h"

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
	checker(&a, &b, &gc);
	display_stack(a, b);
	ft_lstclear(&gc, free);
}