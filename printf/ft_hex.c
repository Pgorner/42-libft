/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:27:24 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/12 16:37:35 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numlen(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		++len;
		num = num / 16;
	}
	return (len);
}

void	ft_dohex(unsigned int num, const char flag)
{
	if (num >= 16)
	{
		ft_dohex(num / 16, flag);
		ft_dohex(num % 16, flag);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
		{
			if (flag == 'x')
				ft_putchar(num - 10 + 'a');
			if (flag == 'X')
				ft_putchar(num - 10 + 'A');
		}
	}
}

int	ft_hex(unsigned int num, const char flag)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_dohex(num, flag);
	return (ft_numlen(num));
}
