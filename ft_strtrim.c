/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:04:17 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/01 18:04:21 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	int		i;
	int		j;

	i = 0;
	j = - 1;
	while (set[j++] != '\0')//aquí tendria que guardar j
	{
		while (s1[i] != '\0' && s1[i] == set[j])
		{
			i++;
		}
	}
	j = - 1;
	while (set[j++] != '\0')//aquí tendria que guardar j
	{
		while (s1_len > 0 && s1[i] == set[j])
		{
			i++;
		}
	}
	return (ft_substr());
}
 