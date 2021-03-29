/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:16:56 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/29 18:18:16 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERAL_H
# define GENERAL_H

/*
**	SIZE_ARRAY NEED TO BE EVEN AND SIZE < 12
*/
# define SIZE_ARRAY 14
# include "../libft/libft.h"
# include "color.h"
# include <limits.h>
void	display_stack(t_list *a, t_list *b);
void	display_text_center(char *text);
void	display_line_empty();
void	parse_number(int ac, char **av, t_list **a);
void	del(void * content);
int		ft_error(t_list *a);
void	push_list(t_list **add, t_list **remove);
void	push_b(t_list **a, t_list **b);
void	swap_list(t_list **lst);
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_a_b(t_list **a, t_list **b);
void	reverse_rotate_list(t_list **lst);
void	reverse_rotate_a(t_list **a);
void	reverse_rotate_b(t_list **b);
void	reverse_rotate_a_b(t_list **a, t_list **b);
void	rotate_list(t_list **lst);
void	rotate_a(t_list **a);
void	rotate_b(t_list **b);
void	rotate_a_b(t_list **a, t_list **b);
#endif