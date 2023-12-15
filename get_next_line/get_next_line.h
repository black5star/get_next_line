
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42

# endif

size_t	ft_strlen(const char *s);
size_t	ftstrlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ftstrdup(const char *s1);
char	*ft_strjoin(char *s1, char const *s2);
char	*my_check(char *s);
char	*first_line(char *str, int fd);
char	*static_modify(char *s);
char	*get_next_line(int fd);

#endif
