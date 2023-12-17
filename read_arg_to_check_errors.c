/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_arg_to_check_errors.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:07:29 by souhanat           #+#    #+#             */
/*   Updated: 2023/06/21 15:12:24 by souhanat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_again_sign(char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
	{
		j = 0;
		if (arr[i][j] == '+' || arr[i][j] == '-')
			j++;
		while (arr[i][j])
		{
			if (arr[i][j] == '-' || arr[i][j] == '+')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_sign(char **arr)
{
	int	i;
	int	j;

	i = 1;
	while (arr[i])
	{
		j = 0;
		while (arr[i][j])
		{
			if (arr[i][j] == '+' || arr[i][j] == '-')
			{
				if (arr[i][j + 1] >= '0' && arr[i][j + 1] <= '9')
					j++;
				else
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_arr(char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
	{
		j = 0;
		while (arr[i][j])
		{
			if (ft_isdigit(arr[i][j]) == 1)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_spaces(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t')
			i++;
		else
			return (0);
	}	
	return (1);
}

void	read_arg_to_check_errors(char **argv, t_data *swap)
{
	char	*arg;

	arg = NULL;
	read_sequel(argv, &arg, swap);
	read_arg_sequel(swap);
	return ;
}
