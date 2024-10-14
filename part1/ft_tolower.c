#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	main(void)
{
	char a = 65;

	printf("%c\n", ft_tolower(a));
}
