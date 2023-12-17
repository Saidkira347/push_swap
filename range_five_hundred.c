/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_five_hundred.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:43:50 by souhanat           #+#    #+#             */
/*   Updated: 2023/06/21 19:07:52 by souhanat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_arr(t_data *data)
{
	int	i;
	int	j;
	int	tmp;

	i = data->total_size - 1;
	tmp = 0;
	while (i > 0)
	{
		j = i - 1;
		while (j >= 0)
		{
			if (data->c[i] > data->c[j])
				j--;
			if (data->c[i] < data->c[j])
			{
				tmp = data->c[j];
				data->c[j] = data->c[i];
				data->c[i] = tmp;
			}
		}
		i--;
	}
}

void	copys(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->total_size)
	{
		data->c[i] = data->a[i];
		i++;
	}
}

int	get_index(int *arr, int size, int n)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == n)
			return (i);
		i++;
	}
	return (-1);
}

void	start_action(t_data *data, int min, int max)
{
	int	top_index;

	while (data->top_a != -1)
	{
		top_index = get_index(data->c, data->top_c + 1, data->a[data->top_a]);
		if (top_index <= max
			&& top_index >= min)
		{
			pb(data);
			min++;
			max++;
		}
		else if (top_index < min)
		{
			pb(data);
			rb(data);
			min++;
			max++;
		}
		else
			ra(data);
	}
}

void	range_five_hundred(t_data *data)
{
	data->c = malloc(data->total_size * sizeof(int));
	if (!data->c)
	{
		free (data->a);
		free (data->b);
		free (data->c);
		exit (1);
	}
	data->top_c = data->total_size - 1;
	copys(data);
	sorting_arr(data);
	start_action(data, 0, 40);
	range_part_two(data);
}
