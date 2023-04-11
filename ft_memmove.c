/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:08:04 by lgaudin           #+#    #+#             */
/*   Updated: 2023/04/11 15:43:05 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*dest_copy;
	unsigned char	*src_copy;
	unsigned char	*buffer;

	count = 0;
	dest_copy = (unsigned char *)dest;
	src_copy = (unsigned char *)src;
	buffer = (unsigned char *)src;
	while (count < n)
	{
		buffer[count] = (unsigned char)src_copy[count];
		count++;
	}
	count = 0;
	while (count < n)
	{
		dest_copy[count] = (unsigned char)buffer[count];
		count++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str[] = "Start stop";

// 	printf("The string: %s\n", str);
// 	ft_memmove(str, str + 2, 3 * sizeof(char));
// 	printf("New string: %s\n", str);

// 	return (0);
// }
