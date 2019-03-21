/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 23:07:21 by ispirido          #+#    #+#             */
/*   Updated: 2018/04/16 23:27:29 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	aff_f(char *str)
{
	int i;
	i = 0;
	
	while (str[i])
	{
		if (str[i] == 'f')
		{
			ft_putchar('f');
			break;
		}
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		aff_f(argv[1]);
	else
	{
		ft_putchar('f');
		ft_putchar('\n');
	}
	return (0);
}
