/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akihito <akihito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:00:24 by akihito           #+#    #+#             */
/*   Updated: 2021/11/27 14:00:58 by akihito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	add_move_cnt(t_vars *vars)
{
	int	x;
	int	y;
	int	col;

	x = 0;
	y = 0;
	col = 0;
	vars->move_cnt++;
	printf("count = %d\n", vars->move_cnt);
	rendermap(vars, x, y);
	return ;
}

void	get_coin(t_vars *vars)
{
	vars->coin_get++;
	if (vars->coin_get == vars->coin_num)
		vars->exit_flag = 1;
	return ;
}
