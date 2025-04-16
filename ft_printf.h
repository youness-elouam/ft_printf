/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:39:25 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/29 12:13:18 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

size_t	ft_strlen(const char *s);
int		ft_printstr(char *s);
int		ft_printnbr(long int n);
int		ft_printchar(char c);
void	ft_printhexa( unsigned long n, char *hex, int *i);
int		ft_printf(const char *format, ...);
int		ft_intlen(long int n);
void	ft_printformat(va_list args, int *cont, char form);

#endif
