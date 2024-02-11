/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:52:38 by francfer          #+#    #+#             */
/*   Updated: 2023/09/29 14:30:50 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len = 11;
		return (len);
	}
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*func(long nb, char *aux, int len)
{
	if (nb == 0)
		aux[0] = '0';
	aux[len] = '\0';
	len--;
	while (nb > 0)
	{
		aux[len] = (nb % 10) + '0';
		len--;
		nb /= 10;
	}
	return (aux);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*aux;
	long	nb;

	nb = n;
	len = numlen(nb);
	aux = (char *)malloc(sizeof(char) * (len + 1));
	if (!aux)
		return (0);
	if (nb < 0)
	{
		aux[0] = '-';
		nb *= -1;
	}
	aux = func(nb, aux, len);
	return (aux);
}

/*
int main ()
{
	printf("%s\n", ft_itoa(-23));
}
*/