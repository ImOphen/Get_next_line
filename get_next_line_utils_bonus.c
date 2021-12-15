/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouhami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:51:29 by atouhami          #+#    #+#             */
/*   Updated: 2021/11/17 11:51:30 by atouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*s;
	size_t		s1len;
	size_t		s2len;

	s1len = ft_strlen((char *)s1);
	s2len = ft_strlen((char *)s2);
	s = malloc((s1len + s2len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	ft_memmove(s, s1, s1len);
	ft_memmove(&s[s1len], s2, s2len);
	s[s1len + s2len] = '\0';
	free((void *)s1);
	return (s);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*psrc;
	char	*pdest;

	psrc = (char *)src;
	pdest = (char *)dest;
	if (!dest || !src)
		return (NULL);
	if (dest > src)
		while (n-- > 0)
			pdest[n] = psrc[n];
	else if (dest < src)
	{
		i = 0;
		while (n--)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	return (dest);
}

int	contains_newline(char const *s1)
{
	int	i;

	i = 0;
	if (!s1)
		return (0);
	while (s1[i])
	{
		if (s1[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
