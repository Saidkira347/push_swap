/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:14:57 by souhanat           #+#    #+#             */
/*   Updated: 2023/12/17 15:36:18 by souhanat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(long nb, int sign)
{
	if ((nb > 2147483647 && sign == 1) || (nb > 2147483648 && sign == -1))
	{
		write (2, "Error\n", 7);
		exit (1);
	}
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += (str[i] - 48);
		i++;
	}
	error(nb, sign);
	return (nb * sign);
}
// if (*str)
// {
// 	write (1, "Hello\n", 7);
// 	write(2, "Error\n", 7);
// 	exit(1);
// }
