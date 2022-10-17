/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner < pgorner@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:58:40 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/12 09:58:40 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function checks if int c is alphanumerical
*/ 

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		{
			return (1);
		}
	return (0);
}
