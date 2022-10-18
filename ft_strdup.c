/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:11:43 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/18 13:25:35 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function returns a pointer to a new string which is
** a duplicate of the string s.  
** Memory for the new string is obtained with malloc, and can be freed with free.
*/

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		size++;
	(new = malloc(sizeof(char) * (size + 1)));
	if (!new)
	{
		return (0);
	}
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
