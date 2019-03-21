/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_h.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 13:19:58 by ispirido          #+#    #+#             */
/*   Updated: 2018/04/23 13:25:33 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	aff_h(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'h')
		{
			ft_putchar('h');
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
		aff_h(argv[1]);
	else
	{
		ft_putchar('h');
		ft_putchar('\n');
	}
	return (0);
}
