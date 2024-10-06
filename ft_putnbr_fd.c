/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:33:05 by alex              #+#    #+#             */
/*   Updated: 2024/10/05 23:53:06 by alex             ###   ########.fr       */
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
	unsigned int	i;

	i = 0;
	while (num >= 10)
	{
		num = num / 10;
		i++;
	}
	return(i+1);
}
void    ft_putnbr_fd(int n, int fd)
{
	unsigned	int	i;
	unsigned	int	len;
	unsigned	int multiplicador;
	unsigned	int aux;
	unsigned	int rest;
	
	rest = 0;
	aux = 0;
	multiplicador = 10;
	ft_is_negative(&n, fd);
	len = ft_uint_len(n);
	while (len-- > 1)
		multiplicador = 1 * multiplicador;
	while(n >= 10)
	{
		rest = (n / multiplicador) - aux;
		aux = rest * 10;
		write(fd, &rest, 1);
		multiplicador = multiplicador / 10;
	}
	write(fd, n, 1);
}