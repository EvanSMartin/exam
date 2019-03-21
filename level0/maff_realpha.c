/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_realpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 20:33:20 by ispirido          #+#    #+#             */
/*   Updated: 2018/05/14 20:38:24 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int	z;
	int y;

	z = 'z';
	y = 'Y';
	while (z >= 'a' && y >= 'A')
	{
		ft_putchar(z);
		ft_putchar(y);
		z -= 2;
		y -= 2;
	}
	ft_putchar('\n');
	return (0);
}
