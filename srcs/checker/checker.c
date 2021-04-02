/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:27:47 by alafranc          #+#    #+#             */
/*   Updated: 2021/04/02 14:46:09 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void pick_instruction(t_list **instruction, t_list **gc)
{
	char *line;
	int ret;
	t_list *new;
	t_list *last;
	t_list *begin;

	line = NULL;
	new = NULL;
	begin = NULL;
	
	while (get_next_line(0, &line) && line[0])
	{
	 	if (!line || !is_instruction(line, gc))
		{
			if (line)
				free(line);
	 		ft_error(*gc);			 
		}
		ft_lstadd_back(instruction, ft_lstnew(ft_strdup(line)));
	 	free(line);
	}
	if (line)
		free(line);
}

char **all_instruction_on_tab(t_list **gc)
{
	int	s_tab;
	char **tab;

	tab = malloc_gc(gc, sizeof(char*) * 11);
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
	i = -1;
	while (++i != 11)
		if (!ft_strcmp(str, tab[i]))
			return (1);
	return (0);
}


void	*init_array_instruction_function(t_list **gc)
{
	void	(**ft_instruction)(t_list **, t_list **, int);

	ft_instruction = malloc_gc(gc, sizeof(ft_instruction) * 11);
	ft_instruction[0] = &swap_a;
	ft_instruction[1] = &swap_b;
	ft_instruction[2] = &swap_a_b;
	ft_instruction[3] = &push_a;
	ft_instruction[4] = &push_b;
	ft_instruction[5] = &rotate_a;
	ft_instruction[6] = &rotate_b;
	ft_instruction[7] = &rotate_a_b;
	ft_instruction[8] = &reverse_rotate_a;
	ft_instruction[9] = &reverse_rotate_b;
	ft_instruction[10] = &reverse_rotate_a_b;
	return (ft_instruction);
}

void	do_instruction(t_list *instruction, t_list **gc, t_list **a, t_list **b)
{
	char	**tab;
	void	(**ft_instruction)(t_list **, t_list **, int);
	int	i;

	tab = all_instruction_on_tab(gc);
	ft_instruction = init_array_instruction_function(gc);
	while (instruction)
	{
		i = -1;
		while (++i != 11)
		{
			if (!ft_strcmp(instruction->content, tab[i]))
			{
				ft_instruction[i](a, b, 0);
				break;
			}
		}
		instruction = instruction->next;
	}
}

void	checker(t_list **a, t_list **b, t_list **gc)
{
	t_list *instruction;

	instruction = NULL;
	pick_instruction(&instruction, gc);
	do_instruction(instruction, gc, a, b);
	if (ft_lst_is_sort(*a, *b))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}