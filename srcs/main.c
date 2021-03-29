/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:05:51 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/27 17:07:08 by alafranc         ###   ########lyon.fr   */
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
	if (a)
		ft_lstclear(&a, del);
	if (b)
		ft_lstclear(&b, del);
	return (1);
}
