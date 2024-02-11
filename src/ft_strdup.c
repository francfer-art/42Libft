/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:13:08 by francfer          #+#    #+#             */
/*   Updated: 2023/09/30 13:54:55 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*aux;
	size_t	len;

	len = ft_strlen(s1) + 1;
	aux = (char *)malloc(sizeof(char) * len);
	if (!aux)
		return (0);
	ft_memcpy(aux, s1, len);
	return (aux);
}

/*
int main()
{
    char source[] = "42MALAGAMOLA";
    char* target = ft_strdup(source);
 
    printf("%s", target);
    return 0;
}
*/