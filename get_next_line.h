#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);
int				get_next_line(int fd, char **line);
void			*ft_memcpy(void *dst, const void *src, size_t n);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlen(const char *s);
char		    *ft_substr(char const *s, unsigned int start, size_t len);

# define BUFF_SIZE 30 
#endif

