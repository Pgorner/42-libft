/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:09:58 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/22 17:44:21 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strnncpy(const char *src, unsigned int start, unsigned int end) //makes string according to start and end of a word
{
	char	*str;
	int i;
	int j;

	j = start;
	i = 0;
	str = malloc(sizeof(char) * ((end-start) + 1));
	if (!str)
		return (NULL);
	while (j < end)
		str[i++] = src[j++];
	str[i] = '\0';
	return (str);
}

int ft_countword (char const *s, char c) //countswords
{
	int i;
	int trigger;

	i = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (i);
}

char **ft_split(char const *s, char c)
{
	int i;
	int j;
	char **tab;
	int index;

	j = 0;
	i = 0;
	index = -1;
	tab = malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !tab)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			tab[j++] = ft_strnncpy(s, index, i);
			index = -1;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}
