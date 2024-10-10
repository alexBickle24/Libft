/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:04:17 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/10 21:57:31 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_trim_left(const char *s1, const char *set)
{
	char	aux;
	size_t	count_left;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	aux = 1;
	count_left = 1;
	while (s1[i] != '\0' && aux == 1)
	{	
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
			{
				count_left++;
				break ;
			}
			if (set[j] != s1[i] && set[j + 1] == '\0')
				aux = 0;
			j++;
		}
		i++;
	}
	return (count_left - 1);
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
		j = 0;
		while (set[j] != '\0')
		{
			j = 0;
			if (set[j] == s1[i])
			{
				count_right++;
				break ;
			}
			if (set[j] != s1[i] && s1[j + 1] == '\0')
				aux = 0;
			j++;
		}
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
	if (i_left > i_right)
		return(ft_strdup(""));
	s1_trim = i_right - i_left + 1;
	return (ft_substr(s1, i_left, s1_trim));
}
int main(void)
{
	const char cadena[] = "ggaggva";
	char basura[] = "av";
	char *ptr;

	ptr = ft_strtrim(cadena, basura);
	printf("%s", ptr);
	free (ptr);
	return(0);
}