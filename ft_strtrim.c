/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:04:17 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/03 23:35:09 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	int		i;
	int		j;

	s1_len = ft_strlen(s1) + 1;
	i = -1;
	j = - 1;
	while (set[j++] != '\0')//aquí tendria que guardar i
	{
		while (s1[i] != '\0' && s1[i] == set[j])
		{
			i++;
		}
	}
	j = - 1;
	while (set[j++] != '\0')//aquí tendria que guardar i
	{
		while (s1_len > 0 && s1[s1_len - 1] == set[j])
		{
			s1_len--;
		}
	}
	return (ft_substr(s1, i, (i - s1_len)));//ver si tengo que poner el +1
}
 