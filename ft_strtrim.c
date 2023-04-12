/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:22:30 by lgaudin           #+#    #+#             */
/*   Updated: 2023/04/12 16:30:13 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	get_start(char const *s1, char const *set, int set_length)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				i++;
				break ;
			}
			j++;
		}
		if (j == set_length)
			return (i);
		j = 0;
	}
	return (0);
}

static int	get_end(char const *s1, char const *set, int set_length)
{
	int	str_length;
	int	j;

	str_length = 0;
	j = 0;
	while (s1[str_length])
		str_length++;
	while (str_length > 0)
	{
		while (set[j])
		{
			if (s1[str_length - 1] == set[j])
			{
				str_length--;
				break ;
			}
			j++;
		}
		if (j == set_length)
			return (str_length);
		j = 0;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	int		set_length;
	char	*trimmed;

	set_length = 0;
	while (set[set_length])
		set_length++;
	if (set_length == 0)
		return ((char *)s1);
	start = get_start(s1, set, set_length);
	end = get_end(s1, set, set_length);
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

// int main(void)
// {
// 	char string[] = "   .      .";
// 	char set[] = "";
// 	printf("Start of %s is %d\n", string, get_start(string, set, 0));
// 	printf("End of %s is %d\n", string, get_end(string, set, 0));
// 	printf("Trimmed %s is %s\n", string, ft_strtrim(string, set));
// 	return (0);
// }
