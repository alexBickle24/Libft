/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:04:17 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/07 08:34:29 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (*s)
	{
		n++;
		s++;
	}
	return (n);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	j;
	char			*ptr;
	size_t			i;

	j = start;
	i = 0;
	if (j > (ft_strlen(s) - 1))
		return (0);
	ptr =(char *)malloc(len);// ver si tengo queponer len +1
	if (!(ptr))
		return (0);
	while (i < len && s[j] != '\0')
	{
		ptr[i] = s[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	int		i;
	int		j;

	s1_len = ft_strlen(s1);
	i = 0;
	j = 0;
	while (set[j++] != '\0')//aquí tendria que guardar i
	{
		while (s1[i] != '\0' && s1[i] == set[j])
		{
			i++;
		}
	}
	j = 0;
	while (set[j++] != '\0')//aquí tendria que guardar i
	{
		while (s1_len > 0 && s1[s1_len] == set[j])
		{
			s1_len--;
		}
	}
	return (ft_substr(s1, i, (i - s1_len + 1)));//ver si tengo que poner el +1
}
int main() {
    const char *str = "   Hello, World!   ";
    const char *set = " ";
    char *trimmed_str = ft_strtrim(str, set);

    if (trimmed_str) {
        printf("Original string: \"%s\"\n", str);
        printf("Trimmed string: \"%s\"\n", trimmed_str);
        free(trimmed_str);
    } else {
        printf("Memory allocation failed\n");
    }

    // Prueba con otros valores
    str = "xxLibft Projectyy";
    set = "xy";
    trimmed_str = ft_strtrim(str, set);

    if (trimmed_str) {
        printf("Original string: \"%s\"\n", str);
        printf("Trimmed string: \"%s\"\n", trimmed_str);
        free(trimmed_str);
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}