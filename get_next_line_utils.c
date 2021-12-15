/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouhami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:51:22 by atouhami          #+#    #+#             */
/*   Updated: 2021/11/17 11:51:24 by atouhami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
