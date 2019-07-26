/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswart <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:16:11 by tswart            #+#    #+#             */
/*   Updated: 2019/06/05 11:46:51 by tswart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	unsigned int i;

	i = 0;
	if (str)
		while (str[i] != '\0')
		{
			ft_putchar_fd(str[i], fd);
			i++;
		}
}
