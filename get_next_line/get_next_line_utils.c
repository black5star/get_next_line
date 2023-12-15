
#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}

size_t	ftstrlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (NULL);
	while (s1[i] && s1[i] != '\n')
	{
		s2[i] = s1[i];
		i++;
	}
	if (s1[i] == '\n')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	if (s2[0] == '\0')
	{
		free(s2);
		return (NULL);
	}
	return (s2);
}

char	*ftstrdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = 0;
	if (!s1)
		return (NULL);
	s2 = (char *)malloc(ftstrlen(s1) + 1);
	if (!s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char			*strjoin;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	strjoin = malloc(ftstrlen(s1) + ftstrlen(s2) + 1);
	if (!strjoin)
		return (NULL);
	while (s1[j])
		strjoin[i++] = s1[j++];
	j = 0;
	while (s2[j])
		strjoin[i++] = s2[j++];
	strjoin[i] = '\0';
	free (s1);
	return (strjoin);
}
