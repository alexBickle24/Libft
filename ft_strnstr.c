/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:03:51 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/11 00:36:29 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (little[i] != '\0' && j < len)
	{
		if (little[i] == big[j])
		{
			if (little[i + 1] == '\0')
				return ((char *) &big[j - i]);
			i++;
			j++;
		}
		else
		{
			j++;
			i = 0;
		}
	}
	return (0);
}
