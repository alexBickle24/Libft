/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:29:44 by alex              #+#    #+#             */
/*   Updated: 2024/10/08 13:13:22 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  len_dest;
    size_t  len_src;
    size_t  total_len;
    
    len_dest = ft_strlen(dst);
    len_src = ft_strlen(src);
    total_len = len_dest + len_src + 1;
    if(total_len <= size)
    {
        ft_strlcpy(dst + len_dest, src, total_len);
        return(total_len);
    }
    if(len_dest >= size)
        dst[size] = '\0';
    if(len_dest == 0 && len_src > size)
        ft_strlcpy(dst , src, size);
    if(len_dest + len_src + 1 > size)
        ft_strlcpy(dst + len_dest, src, size - len_dest);
    return(size);
}