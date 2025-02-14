/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_show_map_case3.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 08:45:06 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/14 17:56:37 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../includes/so_long.h"

static void	so_long_show_map_case_a(t_game *game)
{
	t_pos	tmp;
	t_pos	alt;

	alt.y = -1;
	tmp.y = game->player.pos.x - game->mlx.win_height / 2 - 1;
	while (++tmp.y < game->player.pos.x - game->mlx.win_height / 2
		+ game->mlx.win_height)
	{
		++alt.y;
		tmp.x = -1;
		while (++tmp.x < game->mlx.win_width)
			so_long_put_block(game, &game->world, (t_pos){tmp.x, alt.y},
				game->map.content[tmp.y][tmp.x]);
	}
	mlx_put_image_to_window(game->mlx.mlx, game->mlx.win, game->world.img, 0,
		0);
}

static void	so_long_show_map_case_b(t_game *game)
{
	t_pos	tmp;
	t_pos	alt;

	alt.y = -1;
	tmp.y = game->player.pos.x - game->mlx.win_height / 2 - 1;
	while (++tmp.y < game->player.pos.x - game->mlx.win_height / 2
		+ game->mlx.win_height)
	{
		++alt.y;
		tmp.x = game->map.width - game->mlx.win_width - 1;
		alt.x = -1;
		while (++alt.x < game->mlx.win_width)
		{
			++tmp.x;
			so_long_put_block(game, &game->world, (t_pos){alt.x, alt.y},
				game->map.content[tmp.y][tmp.x]);
		}
	}
	mlx_put_image_to_window(game->mlx.mlx, game->mlx.win, game->world.img, 0,
		0);
}

static void	so_long_show_map_case_c(t_game *game)
{
	t_pos	tmp;
	t_pos	alt;

	alt.y = -1;
	tmp.y = game->player.pos.x - game->mlx.win_height / 2 - 1;
	while (++tmp.y < game->player.pos.x - game->mlx.win_height / 2
		+ game->mlx.win_height)
	{
		++alt.y;
		alt.x = -1;
		tmp.x = game->player.pos.y - game->mlx.win_width / 2 - 1;
		while (++tmp.x < game->player.pos.y - game->mlx.win_width / 2
			+ game->mlx.win_width)
		{
			++alt.x;
			so_long_put_block(game, &game->world, (t_pos){alt.x, alt.y},
				game->map.content[tmp.y][tmp.x]);
		}
	}
	mlx_put_image_to_window(game->mlx.mlx, game->mlx.win, game->world.img, 0,
		0);
}

void	so_long_show_map_case3(t_game *game)
{
	if (game->player.pos.y - game->mlx.win_width / 2 < 0)
		so_long_show_map_case_a(game);
	else if (game->player.pos.y + game->mlx.win_width / 2 > game->map.width - 1)
		so_long_show_map_case_b(game);
	else
		so_long_show_map_case_c(game);
}
