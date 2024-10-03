/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:56 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/03 23:03:49 by alex             ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	unsigned	int	i;
	unsigned	int	j;
	char	*ptr;
	int	rest;
	
	i = ft_is_negative(&n);
	j = ft_uint_len(n);
	ptr = (char *)malloc(i + j + 1);
	if (!(ptr))
		return(0);
	if (i)
	{
		ptr[0] = '-';
	}
	while (n >= 10)
	{
		rest = (n % 10) + '0';
		ptr[j + i - 1] = rest;
		n = n / 10;
		j--;
	}
	ptr[ft_uint_len(n) + i] = '\0';
	return(ptr);
}