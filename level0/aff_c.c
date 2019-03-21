/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_c.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 23:42:07 by ispirido          #+#    #+#             */
/*   Updated: 2018/04/02 23:51:01 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	aff_c(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'c')
		{
			ft_putchar('c');
			break ;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		aff_c(argv[1]);
	else
	{
		ft_putchar('c');
		ft_putchar('\n');
	}
	return (0);
}
