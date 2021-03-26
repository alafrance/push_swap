/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:05:51 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/26 14:09:39 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list *a;
	t_list *b;

	b = NULL;
	a = NULL;
	if (ac == 1)
		return (0);
	parse_number(ac, av, &a);
	display_stack(a, b);
	return (1);
}
