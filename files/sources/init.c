/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduong <vduong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 22:30:20 by vduong            #+#    #+#             */
/*   Updated: 2018/12/08 09:58:35 by vduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void init(t_fdf *fdf, char *filename)
{
	if (!(fdf = (t_fdf *)malloc(sizeof(t_fdf))))
		error("Malloc failed\n");
	parse(fdf, filename);
	/*fdf->mlx.ptr = mlx_init();
	fdf->mlx.window = mlx_new_window(fdf->mlx.ptr, WIN_X, WIN_Y, "FdF");
	mlx_loop(fdf->mlx.window);*/
}