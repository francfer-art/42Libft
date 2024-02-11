/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:33:00 by francfer          #+#    #+#             */
/*   Updated: 2023/09/28 17:24:42 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	distancia;

	distancia = 'a' - 'A';
	if (c >= 0 && c <= 255)
		if (c >= 'A' && c <= 'Z')
			c += distancia;
	return (c);
}

/*
int main()
{
    char ch;
 
    ch = 'g';
    printf("%c in lowercase is represented as  %c",ch, ft_tolower(ch));
 
    return 0;
}
*/