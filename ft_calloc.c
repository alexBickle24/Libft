/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:00:20 by alcarril          #+#    #+#             */
/*   Updated: 2024/09/28 18:43:54 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		i;

	i = 0;
	ptr = malloc(size * nmemb);
	if (!(ptr))
		return (0);
	while (i < 0)
	{
		*(char *)&ptr[i] = 0;
		ptr++;
	}
	return (ptr);
}
