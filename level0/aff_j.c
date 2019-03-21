/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_j.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 20:20:52 by ispirido          #+#    #+#             */
/*   Updated: 2018/05/14 20:26:19 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	aff_j(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'j')
		{
			ft_putchar('j');
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
		aff_j(argv[1]);
	else
	{
		ft_putchar('j');
		ft_putchar('\n');
	}
	return (0);
}
