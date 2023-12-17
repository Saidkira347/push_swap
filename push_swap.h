/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:15:54 by souhanat           #+#    #+#             */
/*   Updated: 2023/06/21 22:35:20 by souhanat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <fcntl.h>

typedef struct data
{
	char	**arr;
	char	*ar;
	int		*a;
	int		*b;
	int		*c;
	int		top_a;
	int		top_b;	
	int		top_c;
	int		total_size;
	int		i;
	int		j;
	int		greater;
	int		smallest;
	int		min;
	int		max;
	int		content;
	int		index;
	int		max_;
	int		min_;
	int		first;
	int		second;
	int		third;
	int		stp;
}t_data;

int		get_index(int *arr, int size, int n);
char	**ft_split(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strjoin(char *s1, char *s2);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int		ft_strlen(char *s);
int		check_duplicated(t_data *data);
int		check_arr(char **arr);
int		convert_arr_to_int(t_data *data);
int		ft_size(char **arr);
int		check_is_sorting(t_data *data);
int		find_index_b(t_data *data, int nb);
int		find_index_c(t_data *data, int nb);
int		find_index_smallest(t_data *data);
int		find_smallest_number(t_data *data);
int		find_greater_numberr(int *stack, int size);
int		check_digit_size(char **arr);
int		check_spaces(char *s);
int		check_arr(char **arr);
int		check_sign(char **arr);
int		check_again_sign(char **arr);
void	start_action(t_data *data, int min, int max);
void	range(t_data *data);
void	range_part_two(t_data *data);
void	range_part_three(t_data *data);
void	sort_five(t_data *data);
void	range_five_hundred(t_data *data);
void	read_arg_to_check_errors(char **argv, t_data *swap);
void	read_sequel(char **argv, char **arg, t_data *swap);
void	read_arg_sequel(t_data *swap);
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);
void	rbb(t_data *data);
void	rrra(t_data *data);
void	rrrb(t_data *data);
void	rrr(t_data *data);

#endif
