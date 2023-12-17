/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_part_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 23:00:15 by souhanat           #+#    #+#             */
/*   Updated: 2023/06/07 23:25:18 by souhanat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rbb(t_data *data)
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
}

void	rrra(t_data *data)
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
}

void	rrrb(t_data *data)
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
}

void	rrr(t_data *data)
{
	if (data->top_a < 0 || data->top_b < 0)
		return ;
	rrra(data);
	rrrb(data);
	write (1, "rrr\n", 5);
}
