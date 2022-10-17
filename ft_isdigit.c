/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:56:08 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/17 18:07:51 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function checks if int c is digit
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		{
			return (1);
		}
	return (0);
}
