/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:18:41 by francfer          #+#    #+#             */
/*   Updated: 2023/09/29 10:27:42 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *)b;
	i = 0;
	while (len != 0)
	{
		a[i] = c;
		i++;
		len--;
	}
	return ((void *)a);
}

/*
int main()
{
    char str[50] = "424242424242424242";
    printf("\nBefore ft_memset(): %s\n", str);
    ft_memset(str + 5, '.', 8*sizeof(char));
    printf("After ft_memset():  %s", str);
    return 0;
}
*/
