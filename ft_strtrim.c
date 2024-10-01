/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:04:17 by alcarril          #+#    #+#             */
/*   Updated: 2024/09/30 23:56:35 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// llevandotelo hasta el finalo hasta el principio
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	int	i;
	char *ptr;
	
	i = -1;
	len = ft_strlen(s1) + 1;
	while (s1[len - len] != set[i++])
	{
		if(i-1)
			len++;
	}
	while(s1[len--])
	{
		if()
			len--;	
	}
	ptr = (char *)malloc()
	if (!(ptr))
		return(0);
	
}
//la otra opciones hacer un substring dadole los parametros
//el len y el size los calcularia con los bucles
