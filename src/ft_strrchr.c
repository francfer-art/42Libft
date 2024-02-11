/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:55:42 by francfer          #+#    #+#             */
/*   Updated: 2023/09/28 17:32:38 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		b;
	int		first;
	char	*str1;

	str1 = (char *)s;
	b = 0;
	first = -1;
	while (str1[b])
	{
		if (str1[b] == (unsigned char)c)
			first = b;
		b++;
	}
	if ((unsigned char)c == '\0')
		return (&str1[b]);
	else if (first >= 0)
		return (&str1[first]);
	else
		return (NULL);
}

/*
int main () {
   const char str[] = "This-is-just-a-test-string"; 
   const char ch = '-'; 
   char *p, *p2;

   p = ft_strrchr(str, ch); 
   printf("String starting from last occurrence of %c is: %s\n", ch, p);

   p2 = ft_strrchr(str, 'i'); 
   printf("String starting from last occurrence of 'i' is: %s\n", p2);

   return 0;
}
*/