# ifndef LIBFT_H
# define LIBFT_H

/* bonus
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}
t_list;
*/



/* libc */
int ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char	*ft_strcpy(char *dst, const char *src);
unsigned int    ft_strlen(const char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int ft_strnstr(const char *big, const char *little, size_t n);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int		ft_toupper(int c);


/* additional */


/* bonus */


/* bonus bonus */


#endif