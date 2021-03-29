/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 07:32:47 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/26 20:13:24 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_display_list(t_list **elem, char *color)
{
	int	size_n;

	if (*elem)
	{
		size_n = ft_size_nb(ft_abs((int)(*elem)->content), 10);
		if ((int)(*elem)->content < 0)
			size_n ++;
	}
	else
		size_n = 0;
	if (ft_even(size_n))
		ft_display_repeat(' ', (SIZE_ARRAY - size_n) / 2);
	else
		ft_display_repeat(' ', (SIZE_ARRAY - size_n) / 2);
	if (*elem)
	{
			ft_printf("%s%d%s", color, (int)(*elem)->content, RESET);
			*elem = (*elem)->next;
	}
	if (ft_even(size_n))
		ft_display_repeat(' ', (SIZE_ARRAY - size_n) / 2);
	else
		ft_display_repeat(' ', (SIZE_ARRAY - size_n + 1) / 2);
	ft_printf("|");
}


static void	display_header()
{
	char	*text_a;
	char	*text_b;

	text_a = "TOP STACK A";
	text_b = "TOP STACK B";
	ft_printf("|");
	ft_display_repeat('-', SIZE_ARRAY * 2 + 1);
	ft_printf("|\n");
	display_text_center(text_a);
	display_text_center(text_b);
	ft_printf("|\n");
	display_line_empty();
}

static void	display_footer()
{
	char *text_a;
	char *text_b;

	text_a = "STACK A";
	text_b = "STACK B";

	display_line_empty();
	display_text_center(text_a);
	display_text_center(text_b);
	ft_printf("|\n");
	ft_printf("|");
	ft_display_repeat('-', SIZE_ARRAY * 2 + 1);
	ft_printf("|\n");
}

void	display_stack(t_list *a, t_list *b)
{
	int biggest;
	int stop_green;

	if (!a && !b)
		return ;
	if (a)
		biggest = (int)a->content;
	display_header();
	stop_green = 0;
	while (a || b)
	{
		ft_printf("|");
		if (a && !stop_green && (int)a->content >= biggest)
		{
			biggest = (int)a->content;
			ft_display_list(&a, BGRN);
		}
		else
		{
			ft_display_list(&a, BRED);
			stop_green = 1;
		}
		ft_display_list(&b, BRED);
		ft_printf("\n");
	}
	display_footer();
}
