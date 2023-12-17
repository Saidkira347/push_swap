/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicated.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:34:55 by souhanat          #+#    #+#             */
/*   Updated: 2023/12/17 15:35:02 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicated(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i <= data->total_size - 1)
	{
		j = i + 1;
		while (j <= data->total_size - 1)
		{
			if (data->a[i] == data->a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
