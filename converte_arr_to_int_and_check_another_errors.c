/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converte_arr_to_int_and_check_another_error        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 23:32:49 by souhanat           #+#    #+#             */
/*   Updated: 2023/12/17 15:36:12 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_is_sorting(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i <= data->total_size - 1)
	{
		j = i + 1;
		while (j <= data->total_size - 1)
		{
			if (data->a[i] > data->a[j])
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	convert_arr_to_int(t_data *data)
{
	int	i;
	int	n;

	i = 0;
	n = data->total_size;
	while (i < data->total_size)
	{
		data->a[n - 1] = ft_atoi(data->arr[i]);
		i++;
		n--;
	}
	return (0);
}

int	check_digit_size_sequel(char **str, int *i, int *j, int *k)
{
	while (str[*i][*j])
	{
		if (str[*i][*j] != '0' && str[*i][*j] <= '9' && str[*i][*j] >= '0')
		{
			*k = 0;
			while (str[*i][*j] && str[*i][*j] <= '9' && str[*i][*j] >= '0')
			{
				(*k)++;
				if (*k > 10)
					return (1);
				(*j)++;
			}
			break ;
		}
	(*j)++;
	}
	return (0);
}

int	check_digit_size(char **arr)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (arr[i])
	{
		j = 0;
		if (check_digit_size_sequel(arr, &i, &j, &k) == 1)
			return (1);
		i++;
	}
	return (0);
}
