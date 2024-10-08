/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:26:30 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/08 19:07:49 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		i;
	size_t		num_values;
	char		*ptr;

	if (!s)
		return (NULL);
	num_values = ft_strlen(s) + 1;
	i = 0;
	ptr = (char *)malloc(num_values * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < num_values)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
