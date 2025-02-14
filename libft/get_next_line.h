/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:53:29 by dcaetano          #+#    #+#             */
/*   Updated: 2025/02/14 16:50:48 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024

# endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*gnl_strchr(const char *str, int c);
void	*gnl_calloc(size_t nmemb, size_t size);
size_t	gnl_strlen(const char *str);
char	*gnl_strjoin(char const *s1, char const *s2);
char	*gnl_substr(char const *s, unsigned int start, size_t len);

#endif
