/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:16:46 by alafranc          #+#    #+#             */
/*   Updated: 2021/03/31 00:28:24 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

#include "general.h"
void	checker(t_list *a, t_list *b, t_list *gc);
void	pick_instruction(t_list **instruction, t_list *gc);
int 	is_instruction(char *str);
#endif