/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:56:19 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/12/04 14:18:23 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		cont;
	int		i;
	va_list	args;

	cont = 0;
	i = 0;
	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_printformat(args, &cont, format[i]);
		}
		else
		{
			write (1, &format[i], 1);
			cont++;
		}
		i++;
	}
	va_end(args);
	return (cont);
}
