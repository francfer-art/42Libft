/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:29:22 by francfer          #+#    #+#             */
/*   Updated: 2023/09/30 17:43:25 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*aux;

	(free(NULL), l1 = ft_strlen(s1), l2 = ft_strlen(s2));
	if (!s1 || !s2)
		return (0);
	aux = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (!aux)
		return (0);
	return (ft_memcpy(aux, s1, l1), ft_memcpy(aux + l1, s2, l2 + 1), aux);
}

/*
int main ()
{
	printf("NEW STRING IS \"%s\"\n", ft_strjoin("42 MALAGA", "mola"));
}
*/