/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:24:15 by francfer          #+#    #+#             */
/*   Updated: 2023/09/30 17:48:39 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_list(char **list)
{
	int	i;

	i = 0;
	while (list[i])
	{
		free(list[i]);
		i++;
	}
	free(list);
}

static size_t	wordscount(char const *s, char c)
{
	size_t	cont;
	char	*aux;

	cont = 0;
	aux = (char *)s;
	if (!*aux)
		return (cont);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0' && !(*s == c))
		{
			cont++;
			while (*s != '\0' && !(*s == c))
				s++;
		}
	}
	return (cont);
}

static size_t	word(char *aux, char c)
{
	size_t	palabra_len;

	if (!ft_strchr(aux, c))
		palabra_len = ft_strlen(aux);
	else
		palabra_len = ft_strchr(aux, c) - aux;
	return (palabra_len);
}

char	**ft_split(char const *s, char c)
{
	char	**lista;
	char	*aux;
	int		i;
	size_t	palabra_len;

	aux = (char *)s;
	lista = (char **)malloc((wordscount(s, c) + 1) * (sizeof(char *)));
	if (!s || !lista)
		return (0);
	i = 0;
	while (*aux != '\0')
	{
		while (*aux == c && *aux != '\0')
			aux++;
		if (*aux != '\0')
		{
			palabra_len = word(aux, c);
			lista[i++] = ft_substr(aux, 0, palabra_len);
			if (!lista[i -1])
				return (free_list(lista), NULL);
			aux += palabra_len;
		}
	}
	lista[i] = NULL;
	return (lista);
}
