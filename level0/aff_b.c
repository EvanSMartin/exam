/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_b.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 22:53:01 by ispirido          #+#    #+#             */
/*   Updated: 2018/04/02 23:49:48 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	aff_b(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'b')
		{
			ft_putchar('b');
			break ;
		}
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		aff_b(argv[1]);
	else
	{
		ft_putchar('b');
		ft_putchar('\n');
	}
	return (0);
}
