/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:30:01 by lgaudin           #+#    #+#             */
/*   Updated: 2023/04/12 13:25:18 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// General ax compiler string length
#define MAX 509

/**
 * @brief
 * Count the number of strings in one big string,
 * based on the separators defined in charset.
 *
 * @param    str     the big string
 * @param    charset the separators
 * @return   int     the number of strings
 */
int	count_strings(char const *str, char c)
{
	int	strings_count;
	int	is_char;

	strings_count = 0;
	is_char = 0;
	while (*str)
	{
		if (*str != c && is_char == 0)
		{
			is_char = 1;
			strings_count++;
		}
		else if (*str == c)
		{
			is_char = 0;
		}
		str++;
	}
	return (strings_count);
}

int	get_start(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			i++;
		else
			break ;
	}
	return (i);
}

int	get_end(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	i--;
	while (i > 0)
	{
		if (s1[i] == c)
			i--;
		else
			break ;
	}
	i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char c)
{
	int		start;
	int		end;
	int		i;
	char	*trimmed;

	start = get_start(s1, c);
	end = get_end(s1, c);
	if (start > end)
		return ((char *) s1);
	trimmed = malloc((end - start + 1) * sizeof(char));
	i = 0;
	if (!trimmed || (start == 0 && end == 0))
		return (0);
	while (start < end)
	{
		trimmed[i] = s1[start];
		start++;
		i++;
	}
	return (trimmed);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		result_index;
	int		string_index;
	int		i;

	s = ft_strtrim(s, c);
	result = malloc(sizeof(char *) * count_strings(s, c));
	i = 0;
	while (i < count_strings(s, c))
		result[i++] = malloc(sizeof(char) * 1000);
	i = -1;
	result_index = 0;
	string_index = 0;
	while (s[++i])
	{
		if (s[i] != c)
			result[result_index][string_index++] = s[i];
		else if (s[i + 1] != c)
		{
			result_index++;
			string_index = 0;
		}
	}
	result[result_index + 1] = 0;
	return (result);
}

// int main(void)
// {
// 	char str[] = "     ";
// 	char sep = ' ';
// 	printf("There are %d strings in \"%s\"\n", count_strings(str, sep), str);
// 	char **result = ft_split(str, sep);
// 	int i = 0;
// 	while (i < count_strings(str, sep))
// 	{
// 		printf("String %d: %s\n", i, result[i]);
// 		i++;
// 	}
// 	return (0);
// }
