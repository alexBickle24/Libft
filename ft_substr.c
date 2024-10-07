/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:38:25 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/07 15:03:09 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			i;

	if (!s)//compribacion de errores
		return (0);
	if (start >= ft_strlen(s))//aqui si star es mayor que len devuelvo un string con un nulo, para no hacer mas lineas uso strdup("")
		return(ft_strdup("")); //se pueden meter funciones en el return de una funcion y se puden meter sirectamente los datos en vez de variables esto es como meteer un nulo en ptr
	if (ft_strlen(s + start) < len)//no se si tengo que castear el len a size_t
		ptr = (char *)malloc(s + start + 1);// ver si tengo queponer len +1 depende si la logitud maxima incluye en nulo o no 
	else
		ptr = (char *)malloc(len);
	if (!(ptr))
		return (0);
	while (i < len && s[start] != '\0')
		ptr[i++] = s[start++];
	ptr[i] = '\0';//seguramente tenga que meter algun ajuste
	return (ptr);
}
//cambiando cosas
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			i;
	size_t			len_def;

	if (!s)//compribacion de errores
		return (NULL);
	if (start >= ft_strlen(s))//aqui si star es mayor que len devuelvo un string con un nulo, para no hacer mas lineas uso strdup("")
		return(ft_strdup("")); //se pueden meter funciones en el return de una funcion y se puden meter sirectamente los datos en vez de variables esto es como meteer un nulo en ptr
	if (ft_strlen((s + start) + 1) < len)//no se si tengo que castear el len a size_t
		len_def = ft_strlen((s + start) + 1);// ver si tengo queponer len +1 depende si la logitud maxima incluye en nulo o no 
	else
		len_def = len;
	ptr = (char *)malloc(len_def);
	if (!(ptr))
		return (0);
	while (i < len_def && s[start] != '\0')
		ptr[i++] = s[start++];
	ptr[i] = '\0';//seguramente tenga que meter algun ajuste
	return (ptr);
}