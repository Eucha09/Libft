#include <stdio.h>
#include <stdlib.h>

char* ft_strtrim(char const* s1, char const* set)
{
	char*	ret;
	int 	del[256];
	size_t	i;
	size_t	j;

	if (s1 == NULL || set == NULL)
		return (NULL);
	ft_memset(del, 0, sizeof(del));
	i = 0;
	while (set != NULL && set[i])
		del[set[i++]] = 1;
	i = 0;
	j = ft_strlen(s1) - 1;
	while (i <= j && del[s1[i]])
		i++;
	while (i < j && del[s1[j]])
		j--;
	ret = (char *)malloc(sizeof(char) * (j - i + 2));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s1 + i, j - i + 2);
	return (ret);
}