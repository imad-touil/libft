/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:31:33 by imatouil          #+#    #+#             */
/*   Updated: 2024/10/23 16:02:27 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%c\n", ft_toupper('a'));
// 	printf("%c\n", ft_toupper('B'));
// 	printf("%c\n", ft_toupper('c'));
// 	char	*s = "iMad26\n";
// 	char	dest[101];
// 	int	i = 0;
// 	while (s[i])
// 	{
// 		dest[i] = ft_toupper(s[i]);
// 		i++;
// 	}
// 	printf("%s", dest);
// }