/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:09:55 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/29 13:40:46 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	fellstr(char *s, int sn, long int n, int i)
{
	int	len;

	len = i + 1;
	if (n == 0)
		s[0] = '0';
	while (n > 0)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	if (sn == 1)
		s[0] = '-';
	s[len] = '\0';
}

int	ft_printnbr(long int n)
{
	int		i;
	int		len;
	int		sn;
	char	*s;

	len = ft_intlen(n);
	i = len - 1;
	sn = 0;
	s = malloc(len);
	if (n < 0)
	{
		n = -n;
		sn = 1;
	}
	fellstr(s, sn, n, i);
	ft_printstr(s);
	free(s);
	return (len);
}
