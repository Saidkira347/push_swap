/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_part_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:01:25 by souhanat           #+#    #+#             */
/*   Updated: 2023/06/20 18:08:52 by souhanat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index_c(t_data *data, int nb)
{
	int	i;

	i = 0;
	while (i < data->total_size)
	{
		if (nb == data->c[i])
			return (i);
		i++;
	}
	return (-1);
}

void	range_part_two(t_data *data)
{
	int	greater;
	int	index;

	while (data->top_b != -1)
	{
		greater = find_greater_numberr(data->b, data->top_b + 1);
		index = get_index(data->b, data->top_b + 1, greater);
		if (data->top_b == index)
			pa(data);
		else if (index >= (data->top_b + 1) / 2)
			rb(data);
		else if (index < (data->top_b + 1) / 2)
			rrb(data);
	}
}
