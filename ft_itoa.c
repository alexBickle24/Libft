/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:56 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/08 23:04:01 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	ft_is_negative(int *num)
{
	if (*num < 0)
	{
		*num = *num * (-1);
		return (1);
	}
	return (0);
}

static unsigned int	ft_uint_len(int num)
{
	unsigned int	j;

	j = 1;
	while (num >= 10)
	{
		num = num / 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	unsigned char	i;
	unsigned int	j;
	char			*ptr;
	char			rest;

	i = ft_is_negative(&n);
	j = ft_uint_len(n);
	ptr = (char *)malloc(i + j + 1);
	if (!(ptr))
		return (0);
	ptr[j + i] = '\0';
	while (n >= 10)
	{
		rest = (n % 10) + '0';
		ptr[j + i - 1] = rest;
		n = n / 10;
		j--;
	}
	ptr[0 + i] = n + '0';
	if (i)
		ptr[0] = '-';
	return (ptr);
}
/*
int	main(void)
{
	int		i;
	char	*ptr;

	i = 56754;
	ptr = ft_itoa(i);
	printf("%s\n", ptr);
	free(ptr);
	i = -188;
	ptr = ft_itoa(i);
	printf("%s\n", ptr);
	free(ptr);
	i = -56873;
	ptr = ft_itoa(i);
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}
*/