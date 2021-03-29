/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:36:43 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/29 17:59:45 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
/*
**	SIZE_ARRAY NEED TO BE EVEN
*/
# define SIZE_ARRAY 12
# include "../libft/libft.h"
# include "color.h"
# include <limits.h>
void	push_swap();
void	display_stack(t_list *a, t_list *b);
void	display_text_center(char *text);
void	display_line_empty();
void	parse_number(int ac, char **av, t_list **a);
void	del(void * content);
int		ft_error(t_list *a);
#endif