/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   istransp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:28:43 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/14 17:58:08 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/so_long.h"

bool	ft_istransp(unsigned int color)
{
	unsigned int	rgb[3];

	rgb[0] = (color >> 16) & 0xFF;
	rgb[1] = (color >> 8) & 0xFF;
	rgb[2] = color & 0xFF;
	return (rgb[0] == 0 && rgb[1] == 0 && rgb[2] == 0);
}
