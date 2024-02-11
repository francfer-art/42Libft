/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:39:08 by francfer          #+#    #+#             */
/*   Updated: 2023/09/28 17:25:47 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str1;
	int		b;

	str1 = (char *)s;
	b = 0;
	while (*str1 != '\0')
	{
		if (str1[b] == (char)c)
			return (str1);
		str1++;
	}
	if ((char)c == '\0')
		return (str1);
	return (0);
}
/*
int main () {
   const char str[] = "This is just a String"; 
   const char ch = 'u'; 
   char *p;
   p = ft_strchr(str, ch);
   printf("String starting from %c is: %s", ch, p);
   return 0;
}
*/
