/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:16:56 by alafranc          #+#    #+#             */
/*   Updated: 2021/04/01 14:06:59 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERAL_H
# define GENERAL_H
# define SIZE_ARRAY 14
# include "../libft/libft.h"
# include "color.h"
# include <limits.h>
#include <stdio.h> //
/*
** DISPLAY STACK
*/
void	display_stack(t_list *a, t_list *b);
void	display_text_center(char *text);
void	display_line_empty();
/*
** PARSE
*/
void	parse_number(int ac, char **av, t_list **a, t_list **gc);
/*
** ERROR
*/
void	del(void * content);
int		ft_error(t_list *gc);
/*
**	INSTRUCTIONS
*/
void	push_list(t_list **add, t_list **remove);
void	push_b(t_list **a, t_list **b);
void	swap_list(t_list **lst);
void	swap_a(t_list **a, t_list **b);
void	swap_b(t_list **a, t_list **b);
void	swap_a_b(t_list **a, t_list **b);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	reverse_rotate_list(t_list **lst);
void	reverse_rotate_a(t_list **a, t_list **b);
void	reverse_rotate_b(t_list **a, t_list **b);
void	reverse_rotate_a_b(t_list **a, t_list **b);
void	rotate_list(t_list **lst);
void	rotate_a(t_list **a, t_list **b);
void	rotate_b(t_list **a, t_list **b);
void	rotate_a_b(t_list **a, t_list **b);
/*
**	GARBAGE COLLECTOR
*/
void	ft_print_garbage_collector(t_list *gc);
void	ft_strdup_gc(t_list **gc, char **dest, char *src);
void	*malloc_gc(t_list **gc, size_t size);
/*
**	IS_SORT
*/
int		ft_lst_is_sort(t_list *lst);
/*
**	TMP FUNCTION FOR DEBUG
*/
void	ft_print_struct_int(t_list *lst);
void	ft_print_struct_str(t_list *lst);
#endif