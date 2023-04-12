/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:10:28 by lgaudin           #+#    #+#             */
/*   Updated: 2023/04/12 19:10:43 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

static char	*ft_strdup(char const *src)
{
	int		length;
	char	*copy;

	length = 0;
	while (src[length])
		length++;
	copy = malloc(sizeof(char) * length + 1);
	length = 0;
	while (src[length])
	{
		copy[length] = src[length];
		length++;
	}
	copy[length] = '\0';
	return (copy);
}

static char	*ft_strcat(char *s1, char const *s2)
{
	int	i;

	i = ft_strlen(s1);
	while (*s2 != '\0')
	{
		s1[i] = *s2;
		i++;
		s2++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	return (ft_strcat(ft_strdup(s1), s2));
}

// int	main(void)
// {
// 	printf("Output is %s\n", ft_strjoin("Salam", "aleykoume"));
// 	return (0);
// }
