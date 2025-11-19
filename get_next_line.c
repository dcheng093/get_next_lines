/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:01:15 by dcheng            #+#    #+#             */
/*   Updated: 2025/11/19 20:21:46 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*extract_line(char **save)
{
	char	*line;
	char	*tmp;
	int		len;

	len = 0;
	if (!*save || **save == '\0')
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
	static char	*save;
	char		*buff;
	int			bytes_read;

}
