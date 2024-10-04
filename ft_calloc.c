/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:00:20 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/04 17:40:17 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc((size * nmemb));
	if (!(ptr))
		return (0);
	while (i < (nmemb * size))
	{
		*(char *)&ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
/*
int	main(void)
{
	void	*aux;
	size_t	num;
	size_t	size;
	int	i = 0;
	
	num = 1;
	size = 12;
	aux = ft_calloc(size, num);
	printf("%c", *(char *)&aux[i]);(char *)&aux[i] pero el free lo tengo maal 
	//porque he movido el puntero 
	free(aux);
	return (0);
}
*/
