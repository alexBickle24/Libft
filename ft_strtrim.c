/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:04:17 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/10 02:38:24 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_trim_left(const char *s1, const char *set)
{
	char	aux;
	size_t	count_left;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	aux = 1;
	count_left = 0;
	while (s1[i] != '\0' && aux)
	{
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				count_left++;
			if (set[j] != s1[i] && set[j + 1] == '\0')
				aux = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return (count_left);
}

static size_t	ft_trim_right(const char *s1, const char *set)
{
	char	aux;
	size_t	count_right;
	size_t	i;
	size_t	j;

	aux = 1;
	j = 0;
	i = ft_strlen(s1) - 1;
	count_right = 0;
	while (i-- && aux)
	{
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				count_right++;
			if (set[j] != s1[i] && s1[j + 1] == '\0')
				aux = 0;
			j++;
		}
		j = 0;
	}
	return (ft_strlen(s1) - 1 - count_right);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i_left;
	size_t	i_right;
	size_t	s1_trim;

	if (!set || !s1)
		return (0);
	i_left = ft_trim_left(s1, set);
	i_right = ft_trim_right(s1, set);
	s1_trim = i_right - i_left;
	return (ft_substr(s1, i_left, s1_trim + 1));
}
