/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:36:51 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/04 15:05:34 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	leng_source;
	size_t	diff_source_n;

	i = 0;
	leng_source = ft_strlen(src) - 1;
	diff_source_n = leng_source - n;
	if (src < dest)
	{
		while (i < n)
		{
			*(char *)&dest[n] = *(char *)(src + n);
			dest--;
			src--;
			i++;
		}
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
//de esta manera esta mal porque tengo que imprimir los primeros asi estaria imprimendo los ultimo que esmas dificil
//asi que deberia guardar este metodo y apuntarlo como ejercicio extra