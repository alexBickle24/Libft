/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:04:17 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/07 21:29:40 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	while (set[j++] != '\0')
		while (s1[i++] != '\0' &&  s1[i] == set[j])
	j = -1;
	while (set[++j] != '\0')
		while (s1_len-- >= 0 && s1[s1_len] == set[j])
			if (s1_len == 0)
				break ;
	return (ft_substr(s1, i, (s1_len - i + 1)));
}
