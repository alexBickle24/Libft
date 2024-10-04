/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:44:24 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/04 13:26:56 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char *ptr;
	
	ptr = (char *)s;
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (ptr[i] == (unsigned char)c)
			return (ptr + i);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
