/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeever <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:00:12 by akeever           #+#    #+#             */
/*   Updated: 2022/08/15 14:40:10 by akeever          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthex(int c)
{
	int	n;

	n = c % 16;
	c = c / 16;
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			write(1, '/', 1);
			ft_puthex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
