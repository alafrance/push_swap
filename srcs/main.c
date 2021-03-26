/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:05:51 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/26 09:30:34 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list *a;
	t_list *b;

	a = NULL;
	b = NULL;
	ft_lstadd_back(&a, ft_lstnew((void*)4));
	ft_lstadd_back(&a, ft_lstnew((void*)3));
	ft_lstadd_back(&a, ft_lstnew((void*)1));
	ft_lstadd_back(&a, ft_lstnew((void*)4));
	ft_lstadd_back(&b, ft_lstnew((void*)4));
	ft_lstadd_back(&b, ft_lstnew((void*)5));
	ft_lstadd_back(&b, ft_lstnew((void*)6));
	// if (ac == 1)
		// return (0);
	display_stack(a, b);
	return (1);
}
