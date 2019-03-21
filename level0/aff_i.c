/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 17:07:44 by ispirido          #+#    #+#             */
/*   Updated: 2018/04/30 17:17:02 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	aff_i(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 'i')
		{
			ft_putchar('i');
		}
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		aff_i(argv[1]);
	}
	else
	{
		ft_putchar('i');
		ft_putchar('\n');
	}
	return (0);
}
