#include <stdlib.h>

static char	**ft_allfree(char **str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static int	ft_word_count(char *str, char c)
{
	int	i;
	int	cnt;
	int	flag;

	cnt = 0;
	flag = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (flag == 0 && str[i] != c)
			cnt++;
		if (str[i] == c)
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (cnt);
}

static char	*ft_getword(char *str, char c)
{
	int		i;
	int		word_len;
	char	*word;

	word_len = 0;
	while (str[word_len] != '\0' && str[word_len] != c)
		word_len++;
	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (word == 0)
		return (0);
	word[word_len] = '\0';
	i = 0;
	while (i < word_len)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		word_cnt;
	int		cnt;
	char	**words;
	int		i;

	if (s == NULL)
		return (NULL);
	word_cnt = ft_word_count(s, c);
	words = (char **)malloc(sizeof(char *) * (word_cnt + 1));
	if (words == 0)
		return (0);
	words[word_cnt] = 0;
	i = 0;
	cnt = 0;
	while (cnt < word_cnt)
	{
		while (s[i] == c)
			i++;
		words[cnt] = ft_getword(&s[i], c);
		if (words[cnt] == NULL)
			reutnr (ft_allfree(s, word_cnt));
		i += ft_strlen(words[cnt++]);
	}
	return (words);
}