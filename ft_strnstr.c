/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:29:06 by imatouil          #+#    #+#             */
/*   Updated: 2024/10/24 23:30:19 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	littlen;
	
	littlen = ft_strlen(little);
	i = 0;
	if (littlen == 0)
		return ((char *)big);
	if (len < littlen)
		return (0);
	while (i <= len - littlen)
	{
		if (ft_strncmp(big + i, little, littlen) == 0)
			return ((char *)(big + i));
		i++;
	}
	return ("oooo");
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strnstr("Emad is the best", "the", 16));
}