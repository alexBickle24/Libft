/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:26:30 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/06 19:20:35 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		i;
	char	*ptr;
	size_t	num_values;

	num_values = ft_strlen(s) + 1;
	i = 0;
	ptr = (char *)malloc(num_values * sizeof(char));
	if (!ptr)
		return(0);
	while (i < num_values)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
