/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:06:31 by alcarril          #+#    #+#             */
/*   Updated: 2024/09/28 12:31:16 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 1)
		dst[i] = '\0';
	while (*src && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	while (i <= size)
	{
		dst[i] = '\0';
	}
	return (size);
}
