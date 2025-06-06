/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:50:29 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/14 17:53:39 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/so_long_bonus.h"

t_map	ft_mapdup(t_map map)
{
	t_map	ret;
	int		tmp;

	so_long_init_map(&ret, NULL);
	ret.height = map.height;
	ret.width = map.width;
	ret.content = (char **)malloc(sizeof(char *) * (ret.height + 1));
	if (ret.content == NULL)
		return (ret);
	tmp = -1;
	while (map.content[++tmp] != NULL)
		ret.content[tmp] = ft_strdup(map.content[tmp]);
	ret.content[tmp] = NULL;
	return (ret);
}
