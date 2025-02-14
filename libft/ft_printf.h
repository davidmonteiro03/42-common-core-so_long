/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 08:05:05 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/14 16:48:55 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdbool.h>

// ------ main function ------ //
int		ft_printf(const char *format, ...);

// ----- format functions ---- //
void	ft_putchar(const char c, int *ret);
void	ft_putstr(const char *str, int *ret);
void	ft_putptr(const void *ptr, int *ret);
void	ft_putnbr(int nbr, int *ret);
void	ft_putnbr_base(unsigned int nbr, unsigned int base, int *ret,
			int (*f)(int));

// ----- utils functions ----- //
void	ft_format(const char *format, va_list args, int *ret);

#endif
