/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 15:24:01 by ispirido          #+#    #+#             */
/*   Updated: 2018/05/01 16:23:16 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	len;

	i = 0;
	while (s1[i])
	{
		if (check(s1, s1[i], i) == 1)
			ft_putchar(s1[i]);
		i++;
	}

	len = i;
	i = 0;
	while (s2[i])
	{
		if (check(s2, s2[i], i) == 1)
		{
			if (check(s1, s2[i], len) == 1)
				ft_putchar(s2[i]);
		}
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
