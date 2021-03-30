/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:27:47 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/31 00:29:22 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void pick_instruction(t_list **instruction, t_list *gc)
{
	char *line;

	line = NULL;
	while (get_next_line(0, &line))
	{
		ft_printf("%s\n", line);
		ft_lstadd_back(instruction, ft_lstnew(line));
		free(line);
	}
	ft_lstadd_back(instruction, ft_lstnew(line));
	if (line)
		free(line);
}

// NEED TO PROTECT MALLOC
char **all_instruction_on_tab()
{
	int	s_tab;
	char **tab;

	tab = malloc(sizeof(char *) * 11);
	//if (!tab)
	//	ft_error(gc);
	tab[0] = ft_strdup("sa");
	tab[1] = ft_strdup("sb");
	tab[2] = ft_strdup("ss");
	tab[3] = ft_strdup("pa");
	tab[4] = ft_strdup("pb");
	tab[5] = ft_strdup("ra");
	tab[6] = ft_strdup("rb");
	tab[7] = ft_strdup("rr");
	tab[8] = ft_strdup("rra");
	tab[9] = ft_strdup("rrb");
	tab[10] = ft_strdup("rrr");
	return (tab);
}

int	is_instruction(char *str)
{
	int	i;
	char **tab;

	tab = all_instruction_on_tab();
	i = 0;
	while (i != 11)
	{
		if (!ft_strcmp(str, tab[i]))
			return (1);
		i++;
	}
	return (0);
}

void	check_error(t_list *instruction, t_list *gc)
{
	while (instruction)
	{
		ft_printf("instruction: %s\n", instruction->content);
		if (!is_instruction(instruction->content))
			ft_error(gc);
		instruction = instruction->next;
	}
}

void	checker(t_list *a, t_list *b, t_list *gc)
{
	t_list *instruction;

	instruction = NULL;
	pick_instruction(&instruction, gc);
	if (!instruction)
	{
		ft_lstclear(&instruction, del);
		exit(EXIT_FAILURE);
	}
	check_error(instruction, gc);
	ft_lstclear(&instruction, del);
}