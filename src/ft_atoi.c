/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:02:34 by francfer          #+#    #+#             */
/*   Updated: 2023/09/30 12:19:12 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	int	cnt;

	num = 0;
	sign = 1;
	cnt = 0;
	while (str[cnt] == ' ' || str[cnt] == '\t' || str[cnt] == '\n'
		|| str[cnt] == '\v' || str[cnt] == '\f' || str[cnt] == '\r')
		cnt++;
	if (str[cnt] == '+' || str[cnt] == '-')
	{
		if (str[cnt] == '-')
			sign *= -1;
		cnt++;
	}
	while (str[cnt] >= '0' && str[cnt] <= '9')
	{
		num = (num * 10) + (str[cnt] - '0');
		cnt++;
	}
	return (num * sign);
}

/*
int	main(void)
{
	printf("%d\n", ft_atoi("-1234"));
}
*/