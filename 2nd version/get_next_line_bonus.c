/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:01:15 by dcheng            #+#    #+#             */
/*   Updated: 2025/11/26 16:32:35 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*extract_line(char **save)
{
	char	*line;
	char	*tmp;
	size_t	len;

	len = 0;
	if (!*save || !**save)
		return (NULL);
	while ((*save)[len] && (*save)[len] != '\n')
		len++;
	line = ft_substr_gnl(*save, 0, len + ((*save)[len] == '\n'));
	if (!line)
		return (NULL);
	tmp = ft_strdup_gnl(*save + len + ((*save)[len] == '\n'));
	free(*save);
	*save = tmp;
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*save[1024];
	ssize_t		bytes;
	char		*buff;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	bytes = 1;
	while (bytes > 0 && !ft_strchr_gnl(save[fd], '\n'))
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes < 0)
		{
			free (buff);
			return (NULL);
		}
		buff[bytes] = '\0';
		save[fd] = ft_strjoin_gnl(save[fd], buff, bytes);
	}
	return (free(buff), extract_line(&save[fd]));
}
