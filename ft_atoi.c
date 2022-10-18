/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:16:38 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/18 12:33:58 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function skips all white-space characters at the beginning of the string, 
** converts the subsequent characters as part of the number, and then stops 
** when it encounters the first character that isn't a number.
**
** Return value:
** Returns the integer representation of a string
*/

int	ft_atoi(const char *str)
{
	int	i;	
	int	nb;	
	int	n;

	i = 0;
	nb = 0;
	n = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-')
		n = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		if (nb < 0 && n == -1 && nb != -2147483648)
			return (0);
		if (nb < 0 && n == 1)
			return (-1);
		i++;
	}
	return (nb * n);
}
