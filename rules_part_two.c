/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_part_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:41:42 by souhanat           #+#    #+#             */
/*   Updated: 2023/06/20 22:55:54 by souhanat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_data *data)
{
	int	tmp;
	int	i;

	if (data->top_a <= 0)
		return ;
	tmp = data->a[data->top_a];
	i = data->top_a;
	while (i != 0)
	{
		data->a[i] = data->a[i - 1];
		i--;
	}
	data->a[i] = tmp;
	write (1, "ra\n", 3);
}

void	rb(t_data *data)
{
	int	tmpe;
	int	j;

	if (data->top_b < 0)
		return ;
	tmpe = data->b[data->top_b];
	j = data->top_b;
	while (j != 0)
	{
		data->b[j] = data->b[j - 1];
		j--;
	}
	data->b[j] = tmpe;
	write (1, "rb\n", 3);
}

void	rr(t_data *data)
{
	int	tmp;
	int	i;

	if (data->top_a < 0 || data->top_b < 0)
		return ;
	if (data->top_a <= 0)
		return ;
	tmp = data->a[data->top_a];
	i = data->top_a;
	while (i != 0)
	{
		data->a[i] = data->a[i - 1];
		i--;
	}
	data->a[i] = tmp;
	rbb(data);
	write (1, "rr\n", 3);
}

void	rra(t_data *data)
{
	int	tmp;
	int	i;
	int	count;

	if (data->top_a <= 0)
		return ;
	tmp = data->a[0];
	i = data->top_a;
	count = 1;
	while (count <= i)
	{
		data->a[count - 1] = data->a[count];
		count++;
	}
	data->a[i] = tmp;
	write (1, "rra\n", 4);
}

void	rrb(t_data *data)
{
	int	tmp;
	int	i;
	int	count;

	if (data->top_b <= 0)
		return ;
	tmp = data->b[0];
	i = data->top_b;
	count = 1;
	while (count <= i)
	{
		data->b[count - 1] = data->b[count];
		count++;
	}
	data->b[i] = tmp;
	write (1, "rrb\n", 4);
}
