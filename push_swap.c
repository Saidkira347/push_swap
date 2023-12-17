/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:15:51 by souhanat           #+#    #+#             */
/*   Updated: 2023/06/20 17:54:08 by souhanat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	swap;

	if (ac > 1)
	{
		read_arg_to_check_errors(av, &swap);
		if (swap.total_size == 2)
			sa(&swap);
		else if (swap.total_size == 3)
			range_part_three(&swap);
		else if (swap.total_size <= 5)
			sort_five(&swap);
		else if (swap.total_size <= 100)
			range(&swap);
		else if (swap.total_size <= 500)
			range_five_hundred(&swap);
		else
			exit (0);
	}
	return (0);
}
