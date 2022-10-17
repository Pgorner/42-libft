/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner < pgorner@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:00:33 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/12 10:00:33 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function checks if int c is within the ASCII table
*/ 

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		{
			return (1);
		}
	return (0);
}
