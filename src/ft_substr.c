/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:30:49 by francfer          #+#    #+#             */
/*   Updated: 2023/10/04 11:21:14 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	length(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] && i < start)
		i++;
	while (s[i] && j < len)
	{
		i++;
		j++;
	}
	return (j);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	char	*sub;

	a = 0;
	b = 0;
	sub = (char *)malloc(length(s, start, len) + 1);
	if (!sub)
		return (0);
	while (s[a] != '\0')
	{
		if (a >= start && b < len)
		{
			sub[b] = s[a];
			b++;
		}
		a++;
	}
	sub[b] = '\0';
	return (sub);
}

/*
int main ()
{
	printf("Required substring is \"%s\"\n", ft_substr("42 MALAGA AA AA AA ", 0,
			5));
}
*/