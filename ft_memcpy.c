/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:47:58 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/05 20:54:46 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char *dest_aux;
	char *src_aux;
	
	dest_aux = (char *)dest;
	src_aux = (char *)src;
	
	i = 0;
	while (i < n)
	{
		dest_aux[i] = src_aux[i];
		i++;
	}
	return (dest);
}
