/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:33:05 by alex              #+#    #+#             */
/*   Updated: 2024/10/03 23:05:56 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_is_negative(int *num)
{
	if (*num < 0)
	{
		return(1);
	}
	return(0);
}
static unsigned int	ft_uint_len(int num)
{
	unsigned int	j;

	j = 0;
	while (num >= 10)
	{
		num = num / 10;
		j++;
	}
	return(j+1);
}
void    ft_putnbr_fd(int n, int fd)
{
	unsigned	int	i;
	unsigned	int	j;
	int	rest;
	
	i = ft_is_negative(&n);
	j = ft_uint_len(n);
	if (i)
	{
		write(fd , "-", 1);
	}
	while (n >= 10)
	{
		rest = (n % 10) + '0';
		write(fd, rest, 1);
		n = n / 10;
		j--;
	}
}