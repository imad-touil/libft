/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:51:31 by imatouil          #+#    #+#             */
/*   Updated: 2024/10/24 16:35:09 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isprint(' '));
// 	printf("%d\n", ft_isprint(127));
// 	printf("%d\n", ft_isprint('0'));
// 	printf("%d\n", ft_isprint('A'));
// 	printf("%d\n", ft_isprint('a'));
// 	printf("%d\n", ft_isprint('9'));
// 	printf("%d\n", ft_isprint(31));
// 	printf("%d\n", ft_isprint(32));
// }