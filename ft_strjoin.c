/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:03:40 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/18 12:57:50 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	char	*str;
	int	j;

	j = 0;
	i = 0;
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s1 || !s2)
		return (0);
	if (!str)
		return (0);
	while (s1[i])
	{
		str[i] = s1[1];
		i++;
	}
	if (!s1[i])
	{
		while (s2[i])
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	}
	str[i] = '0';
	return (str);
}
