/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 00:46:00 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/19 01:59:01 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *argv[])
{
	int i = 1;
	int j;
	int argc = ac;
	if (argc > 1)
	{
		while (argc != 1)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
					argv[i][j] += 32;
				//write(1, &argv[i][j], 1);
				j++;
			}
			//write(1, "\n", 1);
			i++;
			argc--;
		}
		argc = ac;
		i = 1;
		while (argc != 1)
		{
			if (argv[i][0] >= 'a' && argv[i][0] <= 'z')
				argv[i][0] -= 32;
			write(1, &argv[i][0], 1);
			j = 1;
			while (argv[i][j])
			{
				if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') && argv[i][j - 1] == ' ')
					argv[i][j] -= 32;
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
			argc--;
		}
	}
	else
		write(1, "\n", 1);
}
