/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:36:51 by alcarril          #+#    #+#             */
/*   Updated: 2024/09/28 13:55:30 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	leng_source;
	size_t	diff_source_n;

	i = 0;
	leng_source = ft_strlen(src) - 1;
	diff_source_n = leng_source - n;
	if (src < dest)
	{
		while (i < n)
		{
			dest[leng_source - diff_source_n] = src[leng_source];
			dest--;
			src--;
			i++;
		}
		return (dest);
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
}
