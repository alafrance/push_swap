/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafranc <alafranc@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:13:24 by alafranc          #+#    #+#             */
/*   Updated: 2021/04/14 14:54:28 by alafranc         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_number_on_the_top(t_list **a, t_list **b, int pos, int size)
{
	if (pos < (size + 1) / 2)
		while (pos-- > 0)
			rotate_a(a, b, 1);
	else
	{
		pos = size - pos;
		while (pos-- > 0)
			reverse_rotate_a(a, b, 1);
	}
	push_b(a, b, 1);
}

void	push_index(t_list **add, t_list **remove, int index, int is_stack_a)
{
	int	lstsize;

	lstsize = ft_lstsize(*add);
	if (index > (lstsize + 1) / 2)
		while (index++ < lstsize)
		{
			if (is_stack_a)
				reverse_rotate_a(add, remove, 1);
			else
				reverse_rotate_b(add, remove, 1);		
		}
	else
		while (index--)
		{
			if (is_stack_a)
				rotate_a(add, remove, 1);
			else
				rotate_a(add, remove, 1);
		}
	if (is_stack_a)
		push_b(add, remove, 1);
	else
		push_a(add, remove, 1);
}

void	push_on_stack_b_median(t_list **a, t_list **b, int median)
{
	t_list	*begin;
	int		index;

	index = 0;
	begin = *a;
	// dprintf(1, "median: %d\n", median);
	while (*a)
	{
		if ((int) (*a)->content <= median)
		{
			push_index(&begin, b, index, 1);
			*a = begin;
			index = -1;
		}
		else
			*a = (*a)->next;
		index++;
	}
	*a = begin;
}

int		is_in_stack(int number, t_list *lst)
{
	int i;

	i = 0;
	while (lst)
	{
		if ((int)lst->content == number)
			return (i);
		lst = lst->next;
		i++;
	}
	return (-1);
}

void	algo_sort(t_list **a, t_list **b, t_list **gc)
{
	s_ref	*ref;
	int index;
	int	num_index;
	
	ref = malloc(sizeof(s_ref));
	ft_lstadd_front(gc, ft_lstnew(ref));
	index = 0;
	num_index = 0;
	// if (ft_lst_is_sort(*a, *b))
		// return ;
	ref->size = ft_lstsize(*a);
	ref->tab = create_tab(*a, gc, ref->size);
	ref->tab = sort_int_tab(ref->tab, ref->size);
	if (ft_even(ref->size))
		ref->median = ref->size / 2 - 1;
	else
		ref->median = ref->size / 2;
	push_on_stack_b_median(a, b, ref->tab[ref->median]);
	// display_stack(*a, *b);
	while (index != ref->size)
	{
		// sleep(1);
		// ft_printf("\033c");
	// 	// dprintf(1, "\x1b");
		if ((num_index = is_in_stack(ref->tab[index], *b)) != -1)
		{
			// dprintf(1, "num_index: %d\n", num_index);
			// ft_printf("PUT IN A\n");
			// sleep(1);
			while (num_index-- != -1)
				push_a(a, b, 1);
		}
		else if ((num_index = is_in_stack(ref->tab[index], *a)) != -1)
		{
			// dprintf(1, "num_indexx: %d\n", num_index);
			// ft_printf("PUT IN B\n");
			// sleep(1);
			while (num_index--)
				push_b(a, b, 1);
		}
		// if (b->content)
		rotate_a(a, b, 1);
		index++;
	}
	// display_stack(*a, *b);
}
