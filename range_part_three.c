/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_part_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:12:45 by souhanat           #+#    #+#             */
/*   Updated: 2023/06/21 19:15:11 by souhanat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_greater_numberr(int *stack, int size)
{
	int	i;
	int	max;

	i = 1;
	max = stack[0];
	while (i < size)
	{
		if (stack[i] > max)
			max = stack[i];
		i++;
	}
	return (max);
}

int	find_smaller_numberr(int *stack, int size)
{
	int	i;
	int	min;

	i = 1;
	min = stack[0];
	while (i < size)
	{
		if (stack[i] < min)
			min = stack[i];
		i++;
	}
	return (min);
}

void	range_part_three(t_data *data)
{
	data->third = data->a[0];
	data->second = data->a[data->top_a - 1];
	data->first = data->a[data->top_a];
	data->min_ = find_smaller_numberr(data->a, data->top_a + 1);
	data->max_ = find_greater_numberr(data->a, data->top_a + 1);
	if (data->second == data->min_ && data->third == data->max_)
		sa(data);
	else if (data->second == data->max_ && data->third == data->min_)
		rra(data);
	else if (data->first == data->max_ && data->third == data->min_)
	{
		sa(data);
		rra(data);
	}
	else if (data->first == data->max_ && data->second == data->min_)
		ra(data);
	else if (data->first == data->min_ && data->second == data->max_)
	{
		rra(data);
		sa(data);
	}
}
