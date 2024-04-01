/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_bef_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:13:14 by lgaudin           #+#    #+#             */
/*   Updated: 2023/07/09 14:14:34 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_bef_char(char *str, char c)
{
	int		i;
	char	*new;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (str[i] == '\0')
		return (NULL);
	new = ft_strndup(str, i);
	return (new);
}
