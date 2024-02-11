/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:00:55 by francfer          #+#    #+#             */
/*   Updated: 2023/09/29 10:29:09 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			a;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	a = 0;
	while (s11[a] && s22[a] && a < n)
	{
		if (s11[a] != s22[a])
			return (s11[a] - s22[a]);
		a++;
	}
	if (a < n)
		return (s11[a] - s22[a]);
	return (0);
}

/*
int main () {
   char str1[20]="hello";
   char str2[20]="hello worldddd";
   int result;

   //This will compare the first 3 characters
   result = ft_strncmp(str1, str2, 3);

   if(result > 0) {
		printf("ASCII value of first unmatched character of str1 is greater than 
		str2");
   } else if(result < 0) {
		printf("ASCII value of first unmatched character of str1 is less than 
		str2");
   } else {
		printf("Both the strings str1 and str2 are equal");
   }

   return (0);
}
*/
