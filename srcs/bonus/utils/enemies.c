/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemies.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:26:08 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/14 17:52:47 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/so_long_bonus.h"

void	ft_showcontent(void *content)
{
	t_enemy	*tmp;

	tmp = (t_enemy *)content;
	printf("[%11d, %-11d]", tmp->pos.x, tmp->pos.y);
}

void	ft_showenemies(t_list *enemies)
{
	while (enemies != NULL)
	{
		ft_showcontent(enemies->content);
		if (enemies->next != NULL)
			printf(" ");
		enemies = enemies->next;
	}
	printf("\n\n");
}

t_enemy	*ft_newenemy(t_pos pos)
{
	t_enemy	*enemy;

	enemy = (t_enemy *)malloc(sizeof(t_enemy));
	if (enemy == NULL)
		return (NULL);
	enemy->pos = pos;
	return (enemy);
}
