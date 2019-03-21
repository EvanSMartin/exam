/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ispirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 11:09:24 by ispirido          #+#    #+#             */
/*   Updated: 2018/05/01 14:58:03 by ispirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		wdmatch(char *str1, char *str2)
{
	while (*str1)
	{
		while (*str2 && *str2 != *str1)
			str2++;
		if (*str2 != *str1)
			return (0);
		str1++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		if (wdmatch(argv[1], argv[2]))
			while (*argv[1])
				write(1, argv[1]++, 1);
	ft_putchar('\n');
	return (0);
}
