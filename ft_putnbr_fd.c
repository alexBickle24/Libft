/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:33:05 by alex              #+#    #+#             */
/*   Updated: 2024/10/08 19:04:43 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_is_negative(int *num, int fd)
{
	if (*num < 0)
	{
		*num = *num * -1;
		write(fd, "-", 1);
	}
}

static unsigned int	ft_uint_len(int num)
{
	int	i;

	i = 0;
	while (num >= 10)
	{
		num = num / 10;
		i++;
	}
	return (i + 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	len;
	unsigned int	mult;
	unsigned int	rest;
	unsigned int	print;

	rest = 0;
	mult = 1;
	ft_is_negative(&n, fd);
	len = ft_uint_len(n);
	while (len-- > 1)
		mult = 10 * mult;
	while (mult >= 10)
	{
		print = ((n / mult) - rest) + '0';
		rest = (n / mult) * 10;
		write(fd, &print, 1);
		mult = mult / 10;
	}
	n = (n % 10) + '0';
	write(fd, &n, 1);
}
