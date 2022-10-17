# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_                                                :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgorner < pgorner@student.42heilbronn.d    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 10:20:15 by pgorner           #+#    #+#              #
#    Updated: 2022/10/17 10:20:15 by pgorner          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
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
