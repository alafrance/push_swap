/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:27:47 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/31 15:29:13 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void pick_instruction(t_list **instruction, t_list **gc)
{
	char *line;

	line = NULL;
	while (get_next_line(0, &line))
	{
		if (!line || is_instruction(line, gc))
			ft_error(*gc);
		ft_lstadd_back(instruction, ft_lstnew(line));
		free(line);
	}
	if (line)
	{
		if (!is_instruction(line, gc))
			ft_error(*gc);
		ft_lstadd_back(instruction, ft_lstnew(line));
		free(line);		
	}
}

char **all_instruction_on_tab(t_list **gc)
{
	int	s_tab;
	char **tab;

	tab = malloc(sizeof(char*) * 11);
	ft_lstadd_back(gc, ft_lstnew(tab));
	if (!tab)
		ft_error(*gc);
	ft_strdup_gc(gc, &tab[0], "sa");
	ft_strdup_gc(gc, &tab[1],"sb");
	ft_strdup_gc(gc, &tab[2],"ss");
	ft_strdup_gc(gc, &tab[3],"pa");
	ft_strdup_gc(gc, &tab[4],"pb");
	ft_strdup_gc(gc, &tab[5],"ra");
	ft_strdup_gc(gc, &tab[6],"rb");
	ft_strdup_gc(gc, &tab[7],"rr");
	ft_strdup_gc(gc, &tab[8],"rra");
	ft_strdup_gc(gc, &tab[9],"rrb");
	 ft_strdup_gc(gc, &tab[10],"rrr");
	return (tab);
}

int	is_instruction(char *str, t_list **gc)
{
	int	i;
	char **tab;

	tab = all_instruction_on_tab(gc);
	i = 0;
	while (i != 11)
	{
		if (!ft_strcmp(str, tab[i]))
			return (1);
		i++;
	}
	return (0);
}

void	checker(t_list **a, t_list **b, t_list **gc)
{
	t_list *instruction;

	instruction = NULL;
	pick_instruction(&instruction, gc);
	if (!instruction)
	{
		ft_lstclear(&instruction, del);
		exit(EXIT_FAILURE);
	}
	ft_print_struct_str(instruction);
	ft_lstclear(&instruction, del);
}