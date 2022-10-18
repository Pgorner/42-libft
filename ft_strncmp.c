/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:18:06 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/18 15:16:41 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function compares two character strings ( str1 and str2 ). 
** 
** Return values:
** 0				||  s1 and s2 are equal
** Negative integer	||  The stopping character in s1 was less than 
** the stopping character in s2
** Positive integer	||  The stopping character in s1 was greater than 
** the stopping character in s2
*/

#include <stddef.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
