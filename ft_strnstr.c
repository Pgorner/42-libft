/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:02:56 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/18 13:08:58 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function searches at most n characters to locate the first occurrence 
** in the string pointed to by big of the sequence of characters 
** (excluding the terminating null character) in the 
** string pointed to by little.
** 
** Return values:
** 0				||  string not found
** pointer to the located string if it was found
** returns big if little is empty
*/

#include <stddef.h>

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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		c = 0;
		while (hay[i + c] != '\0' && needle[c] != '\0'
			&& hay[i + c] == needle[c] && i + c < len)
			c++;
		if (c == n_len)
			return (hay + i);
		i++;
	}
	return (0);
}
