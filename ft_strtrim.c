/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:04:17 by alcarril          #+#    #+#             */
/*   Updated: 2024/09/30 19:20:28 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	i;
	
	i = 0;
	s1_len = ft_strlen(s1);
	while (*s1 && (*s1 != set[i]))
	{
		i++;
	}
}
