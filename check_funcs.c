/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akihito <akihito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:00:21 by akihito           #+#    #+#             */
/*   Updated: 2022/03/09 22:19:54 by akihito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_map(t_vars *vars)
{
	int	i;

	i = 0;
	if (vars->Eflag[0] == 0)
	{
		put_error("map has no character\n");
	}
	else if (vars->Eflag[0] > 1)
		put_error("map has mult character\n");
	if (vars->Eflag[1] == 0)
		put_error("map has no coin\n");
	if (vars->Eflag[2] == 0)
		put_error("map has no exit\n");
	return ;
}

void	check_extension(char *map_file)
{
	char	*extension;

	extension = ft_strrchr(map_file, '.');//abc.txt.ber -- .ber
	if (!extension || ft_strcmp(extension, ".ber"))
		put_error("invalid map file\n");
	return ;
}

void	rect_check(t_vars *vars, int row_num, int line_len)
{
	int	n;
	int	i;

	i = -1;
	n = -1;

	if (row_num == 1 && line_len == 0)
		put_error("map is completely empty\n");
	while (++i < row_num)
		if (!(vars->map[i][0] == '1' && vars->map[i][line_len - 1] == '1'))
			put_error("map is not surrounded by rectangle wall\n");
	while (++n < line_len)
		if (!(vars->map[0][n] == '1' && vars->map[row_num - 1][n] == '1'))
			put_error("map is not surrounded by rectangle wall\n");
	return ;
}

void	check_store_line(t_vars *vars, int d)
{
	if (d < 0)
	{
		// int	i;
		// while(i < n)
		// {
		// 	free(map[i]);
		// }
		free(vars->map);
		put_error("gnl error");
	}
}

void	check_win_size(t_vars *vars, int MW, int MH)
{
	mlx_get_screen_size(vars->mlx, &vars->MAX_width, &vars->MAX_height);
	vars->win = mlx_new_window(vars->mlx, MW * 32, MH * 32, "so_long");
	if (MW * 32 >= vars->MAX_width || MH * 32 >= vars->MAX_height)
		put_error("window poke out screen");
}
