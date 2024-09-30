/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:26:30 by alcarril          #+#    #+#             */
/*   Updated: 2024/09/30 11:28:10 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ptr;
	size_t	num_values;

	num_values = ft_strlen(s) + 1;
	i = 0;
	ptr = (char *)malloc(num_values * sizeof(char));
	while (i <= num_values)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
