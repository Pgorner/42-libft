/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:09:58 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/25 20:33:09 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnncpy(const char *src, int start, int end)
{
	char	*str;
	int		i;
	int		j;

	j = start;
	i = 0;
	str = ft_calloc((sizeof (char)) * ((end - start) + 1), 1);
	if (!str)
		return (NULL);
	while (j < end)
		str[i++] = src[j++];
	str[i] = '\0';
	return (str);
}

int	ft_countword(char const *s, char c)
{
	int	i;
	int	trigger;

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

static char	**ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free (tab);
	return (NULL);
}

void assign_values(int *i, int *j, int *index)
{
	*i = 0;
	*j = 0;
	*index = -1;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;
	int		index;

	assign_values(&i, &j, &index);
	tab = ft_calloc((ft_countword(s, c) + 1) * sizeof(char *), 1);
	if (!s || !tab)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
		tab[j] = ft_strnncpy(s, index, i);
		if (!tab[j])
			return (ft_free(tab));
		j++;
		index = -1;
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}
