/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:02:37 by dcheng            #+#    #+#             */
/*   Updated: 2025/11/26 16:57:16 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

char	*ft_strdup_gnl(char *s);
char	*ft_get_line(char **prev);
char	*get_next_line(ssize_t fd);
int		ft_strlen_gnl(const char *str);
char	*ft_strjoin_gnl(char *prev, char *buffer, ssize_t bytes);

#endif
