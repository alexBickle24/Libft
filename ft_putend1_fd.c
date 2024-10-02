/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putend1_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:29:48 by alex              #+#    #+#             */
/*   Updated: 2024/10/02 17:32:38 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putendl_fd(char *s, int fd)
{
    while(*s)
    {
        write(fd, s, 1);
        s++;
    }
    write(fd, s, 1);
}