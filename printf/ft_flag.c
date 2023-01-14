/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:20:47 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/12 16:34:35 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag(va_list args, const char flag)
{
	int	len;

	len = 0;
	if (flag == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (flag == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (flag == 'd' || flag == 'i')
		len += ft_nbr(va_arg(args, int));
	else if (flag == 'p')
		len += ft_pointer(va_arg(args, unsigned long long));
	else if (flag == 'u')
		len += ft_uns(va_arg(args, unsigned int));
	else if (flag == 'x' || flag == 'X')
		len += ft_hex(va_arg(args, int), flag);
	else if (flag == '%')
		len += write(1, "%", 1);
	return (len);
}
