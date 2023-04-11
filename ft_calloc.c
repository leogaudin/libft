/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:47:02 by lgaudin           #+#    #+#             */
/*   Updated: 2023/04/11 17:02:38 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t			i;
	unsigned char	*pointer;

	if (nelem == 0 || elsize == 0)
		return (0);
	pointer = malloc(nelem * elsize);
	i = 0;
	while (i < (nelem * elsize))
	{
		pointer[i] = 0;
		i++;
	}
	return (pointer);
}
