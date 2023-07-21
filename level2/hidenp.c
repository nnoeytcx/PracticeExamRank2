/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 02:38:15 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/19 04:02:19 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	i = 0;
	int	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[1][i] && (argv[1][i] != argv[2][j]))
			{
				//printf("%c = %c\n", argv[1][i], argv[2][j]);
				if (argv[2][j] == '\0')
				{
					write (1, "0", 1);
					write(1, "\n", 1);
					return (0);
				}
				j++;
			}
			i++;
		}
		write(1, "1", 1);
	}
	write(1, "\n", 1);
}
