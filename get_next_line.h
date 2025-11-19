/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:02:37 by dcheng            #+#    #+#             */
/*   Updated: 2025/11/19 18:22:35 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

/* gnl */

char	*get_next_line(int fd);

/* gnl_utils*/

char	*ft_strdup_gnl(const char *s);
int		ft_strlen_gnl(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_substr_gnl(char *s, int start, int len);
char	*ft_strjoin_gnl(char *save, char *buff, int r);

#endif
