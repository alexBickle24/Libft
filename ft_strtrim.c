/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:04:17 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/07 15:02:32 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	int		i;
	int		j;
	
	if (!set || !s1)
		return(NULL);
	s1_len = ft_strlen(s1);
	i = -1;
	j = -1;
	if (!set || !s1)//esta es la compribacion de errores que hay que meter simpre que haya malloc.
		return(0);
	while (set[++j] != '\0')
		while (s1[++i] != '\0' && s1[i] == set[j])//con esto consigo que i se guarde hasta que lo necesito
	j = -1;//esto esta fuera del bucle 
	while (set[++j] != '\0')//aquí tendria que guardar i
		while (s1_len-- >= 0 && s1[s1_len] == set[j])//meto el --len para controlar el size
			if (s1_len == 0)
				break ;
	return (ft_substr(s1, i, (s1_len - i + 1)));//ver si tengo que poner el +1 la fucnionsubstr se puede usar con logica de punteros tambien pero en este caso no me interesa tener en cuneta
}
