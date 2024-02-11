/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:53:11 by francfer          #+#    #+#             */
/*   Updated: 2023/09/28 09:26:08 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	n;
	size_t	len;

	n = 0;
	if (!s || !f)
		return ;
	len = ft_strlen(s);
	while (n < len)
	{
		f(n, &s[n]);
		n++;
	}
}
