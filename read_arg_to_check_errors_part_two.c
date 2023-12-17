/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_arg_to_check_errors_part_two.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:09:35 by souhanat           #+#    #+#             */
/*   Updated: 2023/11/28 15:24:55 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	read_sequel(char **argv, char **arg, t_data *swap)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (check_spaces(argv[i]))
		{
			write (2, "Error\n", 7);
			exit(1);
		}
		*arg = ft_strjoin(*arg, argv[i]);
		i++;
	}
	swap->arr = ft_split(*arg, ' ');
	if (check_digit_size(swap->arr) || check_arr(swap->arr)
		|| check_sign(swap->arr) || check_again_sign(swap->arr))
	{
		write(2, "Error\n", 7);
		exit (1);
	}
	swap->total_size = ft_size(swap->arr);
	swap->top_a = swap->total_size - 1;
}

void	read_arg_sequel(t_data *swap)
{
	swap->a = malloc(swap->total_size * sizeof(int));
	if (!swap->a)
	{
		free(swap->a);
		exit(1);
	}
	convert_arr_to_int(&(*swap));
	if (check_duplicated(swap))
	{
		write(2, "Error\n", 7);
		exit(1);
	}
	if (check_is_sorting(swap))
		exit(0);
	swap->b = malloc(swap->total_size * sizeof(int));
	if (!swap->b)
	{
		free(swap->a);
		free(swap->b);
		exit (1);
	}
	swap->top_b = -1;
}
