/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:36:12 by pgorner           #+#    #+#             */
/*   Updated: 2022/12/18 17:13:26 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# include "../libft.h"

// =============================================================================
//									noot_type
// =============================================================================
// Just the thing that makes all of it noot
char	*get_next_line(int fd);
// Frees the result and makes buf = the file content
char	*ft_next(char *buf);
// Just takes the one line that it needs to get
char	*ft_line(char *buf);
// Reads the content of fd
char	*ft_read(int fd, char *buf);
//changed strjoin
char	*strjoin(char *s1, char *s2);
#endif
