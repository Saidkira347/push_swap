/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:43:51 by souhanat           #+#    #+#             */
/*   Updated: 2023/06/21 22:52:23 by souhanat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_smallest_number(t_data *data)
{
	int	i;

	i = data->top_a;
	data->smallest = data->a[data->top_a];
	while (i != -1)
	{
		if (data->a[i] < data->smallest)
		{
			data->smallest = data->a[i];
		}
		i--;
	}
	return (data->smallest);
}

int	find_index_smallest(t_data *data)
{
	int	i;
	int	smallest;

	i = data->top_a;
	smallest = data->smallest;
	while (i != -1)
	{
		if (data->a[i] == smallest)
			return (i);
		i--;
	}
	return (0);
}

void	sort_fivee(t_data *data)
{
	if (data->top_a == 4)
		data->stp = 2;
	if (data->top_a == 3)
		data->stp = 1;
}

void	sort_five(t_data *data)
{
	int	min;
	int	i;

	min = 0;
	i = 0;
	sort_fivee(data);
	while (data->top_a != -1)
	{
		min = find_smallest_number(data);
		if (data->a[data->top_a] == min)
		{
			pb(data);
			i++;
		}
		else if (data->a[data->top_a - 4] == min
			|| data->a[data->top_a - 3] == min)
			rra(data);
		else
			ra(data);
		if (i == data->stp)
			break ;
	}
	range_part_three(data);
	pa(data);
	pa(data);
}
