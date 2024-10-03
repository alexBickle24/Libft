/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:22:17 by alex              #+#    #+#             */
/*   Updated: 2024/10/03 14:52:43 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	*aux_p;
	size_t	*aux_e;
	int	i;
	int	j;
	int	t;

	i = -1;
	j = -1;
	t = -1;
	aux_p = calloc(((ft_strlen(s) / 2) + 1), 1);
	aux_f = calloc(((ft_strlen(s) / 2) + 1), 1);	
	while (s[i])//la creacion de lso dos arrays e basa en que todo lo que tenga principio tenga final por ell pouede hacer correspondencia entre aux_p y aux_e
	{
		if ((i = 0 && s[i] != c) || (s[i] == c && s[i-1] != c))
			aux_p[j++] = i;
		if ((s[i] == c && s[i+1] == '\0') || (s[i] == c && s[i-1] != c))
			aux_e[t++] = i;
	}
	ptr = (char **)malloc(sizeof(char *) * (j + 1));
	if (!ptr)
		return(0);
	while (n < (j + 1))//si el malloc no dejase hacer overflow la notacion cambiaria, relleno primero por el principio pero lo aux los recorro de atras alante
	{
		*ptr = ft_substr(s*, aux_p[j], (aux_e[t] - aux_p[j] + 1));
		ptr++;
		n++;
		j--;
		t--;
	}
	return(ptr);
}
//me sobran 8 lineas.

