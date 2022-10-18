/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:16:38 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/18 13:22:53 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function changes characters to uppercase
*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
