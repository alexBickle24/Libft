/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:39:21 by alex              #+#    #+#             */
/*   Updated: 2024/10/04 14:13:37 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*str;

	str = (char *)malloc(ft_strlen(s) + 1);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i , s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
A cada uno de los valores de s, se le palica la funcion f, que devuelve un char 
y el resultado se alacena en un array(creado en la memoria dinámica).
*/