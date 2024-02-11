/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:10:33 by francfer          #+#    #+#             */
/*   Updated: 2023/09/28 17:18:00 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	srcsize;

	c = 0;
	srcsize = ft_strlen(src);
	if (dstsize == 0)
		return (srcsize);
	if (!dst || !src)
		return (0);
	while (src[c] != '\0' && c < (dstsize - 1))
	{
			dst[c] = src[c];
			c++;
	}
	dst[c] = '\0';
	return (srcsize);
}

/*
int main()
{
   char var1[6] = "stuff";
   char var2[7] = "world!";
   ft_strlcpy(var1, var2, 4);
   printf("hello %s", var1);
}
*/
