/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:56:03 by lgaudin           #+#    #+#             */
/*   Updated: 2023/04/12 20:28:01 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index])
	{
		if (s[index] == c)
			return ((char *)&s[index]);
		index++;
	}
	if (c == '\0')
		return ((char *)&s[index]);
	return (0);
}

// int	main(void)
// {
// 	char	c;
// 	char	*s;

// 	c = 'u';
// 	s = "euuuuuh ?";
// 	printf("strchr returned %s\n", strchr(s, c));
// 	printf("ft_strchr returned %s\n", ft_strchr(s, c));
// 	printf("Théo Babac returned %s\n", s);
// 	return (0);
// }
