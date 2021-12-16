/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouhami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:51:09 by atouhami          #+#    #+#             */
/*   Updated: 2021/11/17 11:51:11 by atouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*first_line(char *str)
{
	int		i;
	char	*line;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n' && str)
		i++;
	line = malloc(i + 2);
	if (!line)
		return (NULL);
	ft_memmove(line, str, i + 1);
	line[i + 1] = '\0';
	return (line);
}

static char	*second_part(char *str)
{
	int		i;
	char	*line;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (0);
	}
	line = malloc(ft_strlen(&str[i]) + 1);
	if (!line)
		return (0);
	ft_memmove(line, &str[i + 1], ft_strlen(&str[i]));
	line[ft_strlen(&str[i])] = '\0';
	free (str);
	if (ft_strlen(line) == 0)
		return (free(line), NULL);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*str[10240];
	char		*line;
	char		buff[BUFFER_SIZE + 1];
	int			readc;

	line = NULL;
	if (fd < 0 || fd > 10240 || BUFFER_SIZE <= 0)
		return (NULL);
	readc = 1;
	while (readc != 0 && !(contains_newline(str[fd])))
	{
		readc = read(fd, buff, BUFFER_SIZE);
		if (readc == -1)
			return (NULL);
		buff[readc] = '\0';
		if (!readc)
			break ;
		str[fd] = ft_strjoin(str[fd], buff);
	}
	line = first_line(str[fd]);
	str[fd] = second_part(str[fd]);
	return (line);
}
