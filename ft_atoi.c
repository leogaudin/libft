/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:00:20 by lgaudin           #+#    #+#             */
/*   Updated: 2023/04/14 15:16:33 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int		i;
	int		negative;
	int		result;

	i = 0;
	negative = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		negative *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	result *= negative;
	return (result);
}

// int main() {
//   const char first[] = "+-54";
//   const char second[] = "-+48";
//   const char third[] = "--47";
//   const char fourth[] = "++47";
//   const char fifth[] = "47";
//   printf("First: atoi returned %d and ft_atoi returned %d\n", atoi(first), ft_atoi(first));
//   printf("second: atoi returned %d and ft_atoi returned %d\n", atoi(second), ft_atoi(second));
//   printf("third: atoi returned %d and ft_atoi returned %d\n", atoi(third), ft_atoi(third));
//   printf("fourth: atoi returned %d and ft_atoi returned %d\n", atoi(fourth), ft_atoi(fourth));
//   printf("fifth: atoi returned %d and ft_atoi returned %d\n", atoi(fifth), ft_atoi(fifth));
//   return 0;
// }
