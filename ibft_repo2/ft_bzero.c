/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:46:20 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/04 12:38:00 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)s = '\0';
		i++;
		s++;
	}
}
/*
int	main(void)
{
	char	cadena[7] = "alhaja";
	void	*aux;
	size_t	len;
	
	len = 3;
	aux = (char *)cadena;
	ft_bzero(aux, len);
	printf("%c", *(char *)&aux[2]);
	return (0);
}
*/