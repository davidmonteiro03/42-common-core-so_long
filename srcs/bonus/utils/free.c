/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 09:14:47 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/14 17:53:16 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/so_long_bonus.h"

void	ft_free(void **ptr)
{
	if (ptr == NULL || *ptr == NULL)
		return ;
	free(*ptr);
	*ptr = NULL;
}

void	ft_freeptrs(void ***ptrs)
{
	int	i;

	if (ptrs == NULL || *ptrs == NULL)
		return ;
	i = -1;
	while ((*ptrs)[++i] != NULL)
		ft_free((void **)&(*ptrs)[i]);
	ft_free((void **)&(*ptrs));
}
