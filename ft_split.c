/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:09:58 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/24 21:15:05 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void	ft_nexstr(char **nxt, size_t *nxtlen, const char *c)
{
	unsigned int	i;

	*nxt = *nxt + *nxtlen;
	*nxtlen = 0;
	i = 0;
	while (*nxt && ft_strchr(c, **nxt))
		(*nxt)++;
	while ((*nxt)[i])
	{
		if (ft_strchr(c, (*nxt)[i]))
			return ;
		(*nxtlen)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*nxt;
	int		i;
	size_t	nxtlen;

	i = 0;
	nxt = (char *)s;
	nxtlen = 0;
	tab = ft_calloc((ft_countword(s, c) + 1), sizeof(char *));
	if (!s || !tab)
		return (NULL);
	while (i < ft_countword(s, c))
	{
		ft_nexstr(&nxt, &nxtlen, &c);
		tab[i] = malloc(sizeof(char) * (nxtlen + 1));
		if (!tab[i])
			return (ft_free(tab));
		ft_strlcpy(tab[i], nxt, nxtlen + 1);
		i++;
	}
	return (tab);
}
