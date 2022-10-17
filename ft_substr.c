/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:37:56 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/17 19:58:21 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION EXPLANATION: 
** Function Allocates and returns a substring
** from the string ’s’. The substring begins 
** at index ’start’ and is of maximum size ’len’.
** 
** Return values:
** 0				||  string empty // allocation failed
** substring of string starting at start with length len
*/ 

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char *str;

    i = 0;
    j = 0;
    str = (char*)malloc(sizeof(*s) * (len + 1));

    if (!s)
	    return (NULL);

	if (!str)
		return (NULL);

    while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}