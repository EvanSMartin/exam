/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_e.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 23:02:26 by ispirido          #+#    #+#             */
/*   Updated: 2018/04/16 23:19:11 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	aff_e(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'e')
		{
			ft_putchar('e');
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
		aff_e(argv[1]);
	else
	{
		ft_putchar('e');
		ft_putchar('\n');
	}
	return (0);
}
