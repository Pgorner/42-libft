/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:26:16 by pgorner           #+#    #+#             */
/*   Updated: 2022/10/17 22:01:29 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*t;

	i = 0;
	t = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			t = ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		t = ((char *)&s[i]);
	return (t);
}   

int ft_findstart(char const *s1, char const *set)
{
    int i;
    int j;
    i = ft_strlen(s1);
    j = 0;
    
    while (j < i)
    {
        while (!s1[j])
        {
        if (ft_strrchr(set, s1[j++]) = 0)
            break;
        }
    }
    return(j);
}

int ft_findend(char const *s1, char const *set)
{
    int i;
    int j;
    i = (ft_strlen(s1));
    j = 0;
    
    while (j < i)
    {
            j--;
            if (ft_strrchr(set, s1[j]) = 0)
                break;
    }
    return(j);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    char *str;
    int i;
    
    start = ft_findstart(s1 , set);
    end = ft_findend(s1 , set);
    str = (char*)malloc(sizeof(*s1) * (end - start + 1));
    i = start;

    if (str == 0)
        return NULL;

    while (i < end)
    {
        str[i] = s1[i];
        i++;    
    }
    i = 0;
    return (str);
}
