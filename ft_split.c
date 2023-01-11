/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:09:58 by pgorner           #+#    #+#             */
/*   Updated: 2023/01/11 14:35:54 by pgorner          ###   ########.fr       */
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
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free (tab);
	return (NULL);
}

int	assign_values(size_t *i, size_t *j, size_t *index, char const *s)
{
	*i = 0;
	*j = 0;
	*index = -1;
	if (!s)
		return (1);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t		j;
	char	**tab;
	size_t		index;

	if (assign_values(&i, &j, &index, s) == 1)
		return (NULL);
	tab = ft_calloc((ft_countword(s, c) + 1) * sizeof(char *), 1);
	if (!tab)
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
	return (tab);
}
