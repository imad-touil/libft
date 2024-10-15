#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strstr("Hello world", "wo"));
	printf("%s\n", ft_strstr("Hello world", ""));
	printf("%s\n", ft_strstr("Hello world", "Wo"));
}
