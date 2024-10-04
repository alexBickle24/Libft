/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:56:04 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/04 13:38:50 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*first;
	const unsigned char	*second;

	first = (const unsigned char *)s1;
	second = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*first != *second)
			return (*first - *second);
		first++;
		second++;
	}
	return (0);
}
//en esta daba un erro raro era por los octales preguntar a carlitos