/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:38:25 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/03 23:32:33 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
