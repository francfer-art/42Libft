/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:06:30 by francfer          #+#    #+#             */
/*   Updated: 2023/09/29 16:29:27 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*aux;
	unsigned const char	*src1;

	aux = (unsigned char *)dst;
	src1 = src;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (0 < len--)
			aux[len] = src1[len];
	}
	return (dst);
}

/*
int main () {
	char src[50] = "42 malaga";
   char dest[50];
   printf("Before ft_memcpy dest = %s\n", dest);
   ft_memmove(dest, src, 5);
   printf("After ft_memcpy dest = %s\n", dest);
   return(0);
}
*/
