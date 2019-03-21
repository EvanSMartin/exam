/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_g.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 13:07:42 by ispirido          #+#    #+#             */
/*   Updated: 2018/04/23 13:19:44 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	aff_g(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'g')
		{
			ft_putchar('g');
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
		aff_g(argv[1]);
	else
	{
		ft_putchar('g');
		ft_putchar('\n');
	}
	return (0);
}
