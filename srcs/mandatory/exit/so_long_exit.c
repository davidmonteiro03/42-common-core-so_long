/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_exit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:00:35 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/14 17:56:13 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/so_long.h"

void	so_long_exit(t_game *game, char *error, bool iserror, bool isfile)
{
	so_long_free(game);
	if (iserror == true)
		so_long_error(error, false, isfile);
	exit(EXIT_SUCCESS);
}
