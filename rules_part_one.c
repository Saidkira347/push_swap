/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_part_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 00:57:02 by souhanat           #+#    #+#             */
/*   Updated: 2023/06/20 18:07:48 by souhanat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *data)
{
	int	tmp;

	if (data->top_a < 1)
		return ;
	tmp = data->a[data->top_a];
	data->a[data->top_a] = data->a[data->top_a - 1];
	data->a[data->top_a - 1] = tmp;
	write (1, "sa\n", 3);
}

void	sb(t_data *data)
{
	int	temp;

	if (data->top_b < 1)
		return ;
	temp = data->b[data->top_b];
	data->b[data->top_b] = data->b[data->top_b - 1];
	data->b[data->top_b - 1] = temp;
	write (1, "sb\n", 3);
}

void	ss(t_data *data)
{
	int	tmp;
	int	temp;

	if (data->top_a < 1)
		return ;
	tmp = data->a[data->top_a];
	data->a[data->top_a] = data->a[data->top_a - 1];
	data->a[data->top_a - 1] = tmp;
	if (data->top_b < 1)
		return ;
	temp = data->b[data->top_b];
	data->b[data->top_b] = data->b[data->top_b - 1];
	data->b[data->top_b - 1] = temp;
	write (1, "ss\n", 3);
}

void	pa(t_data *data)
{
	if (data->top_b < 0)
		return ;
	data->a[data->top_a + 1] = data->b[data->top_b];
	data->b[data->top_b] = 0;
	data->top_a++;
	data->top_b--;
	write (1, "pa\n", 3);
}

void	pb(t_data *data)
{
	if (data->top_a < 0)
		return ;
	data->b[data->top_b + 1] = data->a[data->top_a];
	data->a[data->top_a] = 0;
	data->top_b++;
	data->top_a--;
	write (1, "pb\n", 3);
}
