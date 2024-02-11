/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:25:12 by francfer          #+#    #+#             */
/*   Updated: 2023/09/28 17:17:55 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	cont;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	cont = 0;
	if (dstsize == 0)
		return (src_len);
	if (dstsize < dst_len)
		src_len += dstsize;
	else
		src_len += dst_len;
	while (src[cont] != '\0' && (dst_len + cont) < dstsize - 1)
	{
		dst[dst_len + cont] = src[cont];
		cont++;
	}
	dst[dst_len + cont] = '\0';
	return (src_len);
}

/*
int main()
{
   char var1[6] = "stuff";
   char var2[7] = "world!";
   ft_strlcat(var1, var2, 4);
   printf("hello %s", var1);
}
*/