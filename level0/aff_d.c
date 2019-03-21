/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 23:51:10 by ispirido          #+#    #+#             */
/*   Updated: 2018/04/03 00:12:30 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	aff_d(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'd')
		{
			ft_putchar('d');
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
		aff_d(argv[1]);
	else
	{
		ft_putchar('d');
		ft_putchar('\n');
	}
	return (0);
}
