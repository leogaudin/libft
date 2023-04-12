/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:56:52 by lgaudin           #+#    #+#             */
/*   Updated: 2023/04/12 17:00:53 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	bzero(void *s, size_t n)
{
	size_t			count;
	unsigned char	*pointer_copy;

	count = 0;
	pointer_copy = (unsigned char *)s;
	if (n == 0)
		return ;
	while (count < n)
	{
		pointer_copy[count++] = (unsigned char) '\0';
	}
}
