/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:54:15 by souhanat           #+#    #+#             */
/*   Updated: 2023/06/21 19:08:17 by souhanat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	t_data	data;

	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	data.ar = malloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	if (!data.ar)
	{
		free (data.ar);
		exit (1);
	}
	data.i = -1;
	data.j = -1;
	while (s1[++data.i])
		data.ar[++data.j] = s1[data.i];
	data.i = -1;
	data.ar[++data.j] = ' ';
	while (s2[++data.i])
		data.ar[++data.j] = s2[data.i];
	data.ar[++data.j] = '\0';
	free(s1);
	return (data.ar);
}
