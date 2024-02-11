/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:51:20 by francfer          #+#    #+#             */
/*   Updated: 2023/09/29 10:04:16 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	inicio;
	size_t	fin;
	size_t	i;
	char	*str;

	i = 0;
	inicio = 0;
	str = 0;
	fin = ft_strlen(s1);
	while (s1[inicio] && ft_strchr(set, s1[inicio]))
			inicio++;
	while (fin > inicio && ft_strchr(set, s1[fin - 1]))
			fin--;
		str = (char *)malloc(sizeof(char) * (fin - inicio + 1));
	if (!str)
		return (0);
	while (inicio < fin)
	{
		str[i] = s1[inicio];
		inicio++;
		i++;
	}
	str[i] = 0;
	return (str);
}

/*
int main ()
{
	printf("Required substring is \"%s\"\n", ft_strtrim("aaaaHOLAaaaa", "a"));
}
*/