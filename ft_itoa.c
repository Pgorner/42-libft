/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 22:09:22 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/18 12:47:10 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int	counter;
	int	sign;
	char	*str;

	counter = 0;
	if (n < 0)
	{
		sign = 1;
		n = n * -1;
	}
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	str = (char *)malloc(sizeof(n) * (counter + 1 + sign));
	return (0);
}
