/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countdown.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 20:39:27 by ispirido          #+#    #+#             */
/*   Updated: 2018/05/14 20:43:04 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	int	i;

	i = '9';
	while (i >= '0')
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
	return (0);
}