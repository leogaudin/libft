/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:30:31 by lgaudin           #+#    #+#             */
/*   Updated: 2023/04/12 11:54:44 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	get_digits(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	ft_rev_tab(char *tab, int size)
{
	int		i;
	char	*array;

	i = 0;
	array = malloc(size * sizeof(char));
	while (i < size)
	{
		array[i] = *tab;
		if (i != size - 1)
			tab++;
		i++;
	}
	i--;
	tab -= (size - 1);
	while (i >= 0)
	{
		*tab++ = array[i];
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		digit_count;
	char	*result;
	int		i;

	digit_count = get_digits(n);
	result = malloc(digit_count * sizeof(char));
	i = 0;
	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		result[digit_count - 1] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		result[i++] = (n % 10) + '0';
		n /= 10;
	}
	ft_rev_tab(result, digit_count);
	return (result);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-2147483648));
// 	return (0);
// }
