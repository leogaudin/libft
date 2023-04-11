/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:56:52 by lgaudin           #+#    #+#             */
/*   Updated: 2023/04/11 15:45:20 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	bzero(void *s, size_t n)
{
	size_t			count;
	unsigned char	*pointer_copy;

	count = 0;
	pointer_copy = (unsigned char *)s;
	while (count < n)
	{
		pointer_copy[count++] = (unsigned char) '\0';
	}
	return (s);
}
