/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:27:54 by francfer          #+#    #+#             */
/*   Updated: 2023/09/28 17:37:17 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	b;
	void	*s1;

	b = 0;
	s1 = (void *)s;
	while (b < n)
	{
		if (((unsigned char *)s)[b] == (unsigned char)c)
			return (s1);
		b++;
		s1++;
	}
	return (0);
}

/*
int main () {
   const char str[] = "42MALAga";
   const char ch = 'X';
   char *ret;

   ret = ft_memchr(str, ch, ft_strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
*/
