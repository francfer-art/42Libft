/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:21:29 by francfer          #+#    #+#             */
/*   Updated: 2023/09/28 17:20:55 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	distancia;

	distancia = 'a' - 'A';
	if (c >= 'a' && c <= 'z')
		c -= distancia;
	return (c);
}

/*
int main()
{
    char ch;
 
    ch = 'g';
    printf("%c in uppercase is represented as  %c",ch, ft_toupper(ch));
 
    return 0;
}
*/
