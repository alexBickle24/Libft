/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:01:02 by alcarril          #+#    #+#             */
/*   Updated: 2024/09/26 21:52:22 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
*/

int	ft_atoi(const char *nptr)
{
	int	sing;
	int	num;

	sing = 1;
	num = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
	{
		nptr++;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
		{
			sing = -1;
		}
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = num * 10 + (*nptr - '0');
		nptr++;
	}
	return (num * sing);
}
/*
int main(void)
{
	const char cadena[] = "  -+-+34343 -22";
	int numero = ft_atoi(cadena);
	int atoi_num = atoi(cadena);
	printf ("%d", numero);
	printf ("%d", atoi_num);
	return(0); 
}
*/