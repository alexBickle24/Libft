/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:47:51 by alcarril          #+#    #+#             */
/*   Updated: 2024/09/24 20:29:17 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}
/*
int	main(void)
{
	const char cadena[] = "alocao";
	int caracter = 108 ;
	char *output = ft_strchr(cadena, caracter);
	printf("%s", output);
	return (0);
}
*/
