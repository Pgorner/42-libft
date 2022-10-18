/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:04:09 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/18 13:04:27 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function outputs string length
*/

unsigned int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
