/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:20:56 by alcarril          #+#    #+#             */
/*   Updated: 2024/10/01 19:15:57 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_itoa(int n)
{
	int	rest;
	
	//char	*malloc_calculator(int num)

	int	i;
	int	j;
	char	*ptr;
	
	i = 0;
	j = 0;
	//va ser mi funcion auxiliar int  sign(n) lo que devuelva lo
	if (n < 0)
	{
		n = -n;
		i = 1;
	}
	//va ser mi funcion auxiliar
	while (n > 10)
	{
		n = n / 10;
		j++;
	}
	//aqui podria usar calloc para no tenner que usar el calloc
	ptr = (char *)malloc(j + i + 1);
	if (!(ptr))
		return(0);
	//aqui acaba mi funcion auxiliar
	if (i = 1)
	{
		ptr[j + i] = '-';
	}
	while (n >= 10)
	{
		rest = (n % 10) + '0';
		ptr[j + i - 1] = rest;
		n = n / 10;
		j--;
	}
	ptr[j + i] = '\0';
	return(ptr);
}