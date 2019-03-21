/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 22:38:17 by ispirido          #+#    #+#             */
/*   Updated: 2018/04/30 23:06:08 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		search_and_replace(char *s1, char *s2, char *s3)
{
	int	i;

	i = 0;
	while (s1[1] != '\0')
	{
		if (s1[i] == s2[0])
		{
			s1[i] = s3[0];
			ft_putchar(s1[i]);
		}
		else
		{
			ft_putchar(s1[i]);
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		ft_putchar('\n');
	else
	{
		if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
			search_and_replace(argv[1], argv[2], argv[3]);
		else
			ft_putchar('\n');
	}
	return (0);
}
