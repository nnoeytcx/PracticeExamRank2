/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:48:24 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/17 13:38:53 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchr_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	c;

	i = 0;
	if (argc == 2)
	{
		c = argv[1][i];
		while (argv[1][i])
		{
			if (c >= 'A' && c <= 'Z')
			{
				ft_putchr_fd('_', 1);
				c += 32;
			}
			ft_putchr_fd(c, 1);
			i++;
			c = argv[1][i];
		}
	}
	ft_putchr_fd('\n', 1);
}
