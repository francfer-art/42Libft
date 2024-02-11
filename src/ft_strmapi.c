/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:33:50 by francfer          #+#    #+#             */
/*   Updated: 2023/10/04 11:29:28 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	n;
	size_t	len;
	char	*new;

	n = 0;
	if (!s || !f)
		return (NULL);
	len = strlen(s);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (n < len)
	{
		new[n] = f(n, s[n]);
		n++;
	}
	new[n] = '\0';
	return (new);
}

/*
int	main(void)
{
	ft_strmapi("hola", tam);
	return (0);
}
*/