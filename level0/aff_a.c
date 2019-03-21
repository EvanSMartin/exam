/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 16:29:43 by ispirido          #+#    #+#             */
/*   Updated: 2018/04/23 13:19:46 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_aff_a(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(str[i] == 'a')
		{
			ft_putchar('a');
			break;
		}
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_aff_a(argv[1]);
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	return (0);
}
