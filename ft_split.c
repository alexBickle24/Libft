/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:22:17 by alex              #+#    #+#             */
/*   Updated: 2024/10/08 22:34:44 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_counter_begin(const char *s, char c)
{
	size_t	i;
	size_t	j;
	char	*aux_b;

	aux_b = ft_calloc(((ft_strlen(s) / 2) + 1), 1);
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || (s[i] == c && s[i - 1] != c))
		{
			aux_b[j] = i;
			j++;
		}
		i++;
	}
	return (aux_b);
}

char	*ft_counter_end(const char *s, char c)
{
	size_t	i;
	size_t	t;
	char	*aux_e;

	aux_e = ft_calloc(((ft_strlen(s) / 2) + 1), 1);
	while (s[i] != '\0')
	{
		if ((s[i] == c && s[i + 1] == '\0') || (s[i] == c && s[i - 1] != c))
		{
			aux_e[t] = i;
			t++;
		}
		i++;
	}
	return (aux_e);
}

void	*ft_free(char **ptr, int i)
{
	while (i >= 0)
	{
		free((ptr + i));
		i--;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t	n;
	char	**ptr;
	char	*aux_b;
	char	*aux_e;

	n = 0;
	aux_b = ft_counter_begin(s, c);
	aux_e = ft_counter_end(s, c);
	ptr = (char **)malloc(ft_strlen(aux_b) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (n < ft_strlen(aux_b))
	{
		*(ptr + n) = ft_substr(s, aux_b[n], (aux_e[n] - aux_b[n] + 1));
		if (!*(ptr + n))
			return (ft_free(ptr, n));
		n++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	**ptr;
	char	*s1;
	char	c;

	s1 = "comeme los huevos";
	c = ' ';
	ptr = ft_split(s1, c);
	printf("%s", *(ptr + 1));
	free(ptr);
	return (0);
}
*/