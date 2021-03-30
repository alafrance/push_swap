/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:27:47 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/30 19:35:50 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_list *pick_instruction(t_list *gc)
{
	(void)gc;
	char *line;
	t_list *instruction;

	while (get_next_line(0, &line))
	{
		ft_lstadd_back(&instruction, ft_lstnew(line));
		free(line);
	}
	return (instruction);
}

void	checker(t_list *a, t_list *b, t_list *gc)
{
	t_list *instruction;

	instruction = pick_instruction(gc);
	(void)a;
	(void)b;
}