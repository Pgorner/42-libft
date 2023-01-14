/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:30:25 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/12 13:42:07 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	numlen(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		++len;
		num = num / 10;
	}
	return (len);
}

char	*toa(unsigned int n)
{
	char	*num;
	int		len;

	len = numlen(n);
	num = (char *)ft_calloc(sizeof(char) * (len + 1), 1);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n = n / 10;
		--len;
	}
	return (num);
}

int	ft_uns(unsigned int n)
{
	int		len;
	char	*num;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		num = toa(n);
		len += ft_printstr(num);
		free(num);
	}
	return (len);
}
