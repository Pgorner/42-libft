/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:17:16 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/18 13:22:33 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function changes characters to lowercase
*/

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
