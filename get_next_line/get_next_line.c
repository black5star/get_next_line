
#include "get_next_line.h"

char	*my_check(char	*s)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == '\n')
			return (s);
		i++;
	}
	return (NULL);
}

char	*first_line(char *str, int fd)
{
	char	*buffer;
	int		i;

	buffer = malloc((size_t)BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	i = 1;
	while (!my_check(str) && i != 0)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i == -1)
		{
			free(str);
			free(buffer);
			return (NULL);
		}
		buffer[i] = '\0';
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	return (str);
}

char	*static_modify(char *s)
{
	char	*str;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	if (!s[len])
	{
		free(s);
		return (NULL);
	}
	str = malloc(ftstrlen(s) - len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[len])
		str[i++] = s[len++];
	str[i] = '\0';
	free(s);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*returned;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	line = first_line(line, fd);
	if (!line)
		returned = NULL;
	else
		returned = ft_strdup(line);
	line = static_modify(line);
	return (returned);
}
