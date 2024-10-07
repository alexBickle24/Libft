/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:06:31 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/07 14:25:11 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 1)
		dst[i] = '\0';
	while (*src && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	while (i <= size)
	{
		dst[i] = '\0';
	}
	return (size);
}
