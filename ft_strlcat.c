/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:29:44 by alex              #+#    #+#             */
/*   Updated: 2024/10/10 02:45:49 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		len_dest;
	size_t		len_src;
	size_t		total_len;

	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	total_len = len_dest + len_src;
	if (len_dest >= size)
		return(size + len_src);
	ft_strlcpy(dst + len_dest, src, size);
	return (total_len);
}
