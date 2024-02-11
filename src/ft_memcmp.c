/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:10:09 by francfer          #+#    #+#             */
/*   Updated: 2023/09/28 17:38:23 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			b;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	b = 0;
	if (!s11 && !s22)
		return (0);
	while (b < n)
	{
		if (s11[b] != s22[b])
			return (s11[b] - s22[b]);
		b++;
	}
	return (0);
}

/*
int main () {
   char str1[15];
   char str2[15];
   int ret;

   ft_memcpy(str1, "ASWERT", 6);
   ft_memcpy(str2, "aswert", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}
*/