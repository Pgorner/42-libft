/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:02:56 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/26 17:11:30 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function searches the occurrence of a specified character in the given string 
** and returns the pointer to it.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		strl;

	strl = ft_strlen(s);
	i = 0;
	if (strl == 0 && *s != 0)
		return (NULL);
	if (*s == 0 && strl != 0)
		return ((char *)s);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
