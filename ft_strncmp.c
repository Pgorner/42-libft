/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner < pgorner@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:18:06 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/12 10:18:06 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function compares two character strings ( str1 and str2 ). 
** 
** Return values:
** 0				||  s1 and s2 are equal
** Negative integer	||  The stopping character in s1 was less than the stopping character in s2
** Positive integer	||  The stopping character in s1 was greater than the stopping character in s2
*/ 

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				r;

	r = 0;
	while ((s1[i] || s2[i]) && r == 0 && i < n)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}
