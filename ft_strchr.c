/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:31:58 by imatouil          #+#    #+#             */
/*   Updated: 2024/10/24 19:20:01 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	return (0);
}

// #include <stdio.h>
//
// int main(void)
// {
//     printf(";%s;\n", ft_strchr("Hello world", 'l'));
//     char *str = ft_strchr("imad", 'a');
//     if (str != NULL)
//         printf("found , w had dalil \"%s\"\n", str);
//     else
//         printf("not found, 404 LOL!\n");
// }