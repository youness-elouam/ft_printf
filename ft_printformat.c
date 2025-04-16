/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:12:34 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/30 11:51:27 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_ad(void *p)
{
	int	cont;

	cont = 0;
	if (p == 0)
	{
		cont += ft_printstr("(nil)");
		return (cont);
	}
	write (1, "0x", 2);
	ft_printhexa ((unsigned long)p, "0123456789abcdef", &cont);
	cont += 2;
	return (cont);
}

static int	printstr(char *s)
{
	int	cont;

	if (s == NULL)
		cont = ft_printstr("(null)");
	else
		cont = ft_printstr(s);
	return (cont);
}

void	ft_printformat(va_list args, int *cont, char form)
{
	void	*p;

	if (form == 'c')
		(*cont) += ft_printchar(va_arg(args, int));
	else if (form == 's')
		(*cont) += printstr(va_arg(args, char *));
	else if (form == 'p')
	{
		p = va_arg(args, void *);
		(*cont) += print_ad(p);
	}
	else if (form == 'd')
		(*cont) += ft_printnbr (va_arg(args, int));
	else if (form == 'i')
		(*cont) += ft_printnbr(va_arg(args, int));
	else if (form == 'u')
		(*cont) += ft_printnbr(va_arg(args, unsigned int));
	else if (form == 'x')
		ft_printhexa(va_arg(args, unsigned int), "0123456789abcdef", &(*cont));
	else if (form == 'X')
		ft_printhexa(va_arg(args, unsigned int), "0123456789ABCDEF", &(*cont));
	else if (form == '%')
		(*cont) += ft_printchar('%');
}
