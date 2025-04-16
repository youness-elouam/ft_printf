/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 09:58:39 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/28 10:22:16 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhexa(unsigned long n, char *hex, int *i)
{
	if (n != 0)
	{
		if (n / 16 != 0)
			ft_printhexa(n / 16, hex, i);
		(*i)++;
		ft_printchar(hex[n % 16]);
	}
	if (n == 0)
	{
		(*i)++;
		ft_printchar('0');
	}
}
