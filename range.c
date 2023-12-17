/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:44:13 by souhanat           #+#    #+#             */
/*   Updated: 2023/06/20 22:23:27 by souhanat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index_b(t_data *data, int nb)
{
	int	i;

	i = data->top_b;
	while (i != -1)
	{
		if (data->b[i] == nb)
			return (i);
		i--;
	}
	return (0);
}

void	sorting_array(t_data *data)
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

void	copy(t_data *data)
{
	int	i;

	i = 0;
	data->top_c = data->total_size - 1;
	data->c = malloc(data->total_size * sizeof(int));
	if (!data->c)
	{
		free(data->a);
		free(data->b);
		free(data->c);
		exit (0);
	}
	while (i < data->total_size)
	{
		data->c[i] = data->a[i];
		i++;
	}
}

void	range(t_data *data)
{
	copy(data);
	sorting_array(data);
	start_action(data, 0, 15);
	range_part_two(data);
}
