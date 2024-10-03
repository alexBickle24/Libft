/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:00:20 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/03 22:54:37 by alex             ###   ########.fr       */
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
	while (i < nmemb)
	{
		*(char *)&ptr[i] = 0;
		ptr++;
		i++;
	}
	return (ptr);
}
