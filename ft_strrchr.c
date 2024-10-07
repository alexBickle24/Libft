/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:44:24 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/06 22:36:44 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char *ptr;
	
	ptr = (char *)s;
	i = ft_strlen(s);
	while (i-- > 0)
	{
		if (ptr[i] == (unsigned char)c)
			return (ptr + i);
	}
	return (0);
}
