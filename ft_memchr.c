/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:47:58 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/02 22:25:23 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *s, int c, size_t n)
{
	const unsigned char		*ptr;
	size_t					i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*ptr == (unsigned char)c)
			return (s);
		i++;
		ptr++;
	}
	return (0);
}
//podria darse el caso de que n sea mayot que es size de la cadena original en cuyo caso supongoq ue tendria que meter nulos 