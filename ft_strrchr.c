/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:56:03 by lgaudin           #+#    #+#             */
/*   Updated: 2023/04/12 20:29:41 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	index;
	int	i;

	index = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			index = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (index == 0 && s[0] != c)
		return (0);
	return ((char *)&s[index]);
}

// int	main(void)
// {
// 	char	c;
// 	char	*s;

// 	c = 'a';
// 	s = "euuuhuuh ?";
// 	printf("strchr returned %s\n", strrchr(s, c));
// 	printf("ft_strchr returned %s\n", ft_strrchr(s, c));
// 	printf("Théo Babac returned %s\n", s);
// 	return (0);
// }
