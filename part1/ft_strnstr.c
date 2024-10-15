#include <string.h>

int	ft_s(const char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strnstr(const char *str, const char *to_find, size_t n)
{
        size_t     i;
        size_t     j;

        if (to_find[0] == '\0')
                return (char *)(str);
        i = 0;
        while (str[i] && i < n)
        {
                j = 0;
                while (str[i + j] == to_find[j] && to_find[j])
                {
                        if (to_find[j + 1] == '\0')
                                return (char *)(str + i);
                        j++;
                }
                i++;
        }
        return (char *)(str + ft_s(str) - 1);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strnstr("Hello world", "wor", 3));
}
