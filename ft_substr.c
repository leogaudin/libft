/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:08:40 by lgaudin           #+#    #+#             */
/*   Updated: 2023/04/12 20:51:18 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char const *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if ((size_t)ft_strlen(s + start) < len)
		sub = malloc((ft_strlen(s + start) + 1) * sizeof(char));
	else
		sub = malloc((len + 1) * sizeof(char));
	if (!sub || start >= (unsigned int)ft_strlen(s))
		return (sub);
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// int main(void)
// {
// 	char* str = "Salut";
// 	int start = 2;
// 	return (0);
// }
