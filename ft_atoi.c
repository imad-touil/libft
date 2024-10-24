/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:50:18 by imatouil          #+#    #+#             */
/*   Updated: 2024/10/23 23:28:34 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	r;
	int	s;

	i = 0;
	r = 0;
	s = 1;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = 10 * r + str[i] - 48;
		i++;
	}
	return (s * r);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *s1 = "  12a3";
// 	printf("%d\n", ft_atoi(s1));
// 	char *s2 = "  123  ";
// 	printf("%d\n", ft_atoi(s2));
// 	char *s3 = "a  123  ";
// 	printf("%d\n", ft_atoi(s3));
// 	char *s4 = "  123   ";
// 	printf("%d\n", ft_atoi(s4));
// }