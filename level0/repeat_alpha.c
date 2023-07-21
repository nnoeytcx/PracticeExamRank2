/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:26:28 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/19 15:39:22 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{

	int i = 0;
	char c;
	int re;

	if (argc == 2)
	{
		while (argv[1][i])
		{	c = argv[1][i];
			if (c >= 'a' && c <= 'z')
			{
				//printf("re == %d\n", re);
				re = c - 'a' + 1;
				while (re != 0)
				{
					write(1, &c, 1);
					re--;
				}
			}
			else if (c >= 'A' && c <= 'Z')
			{
				//printf("re == %d\n", re);
				re = c - 'A' + 1;
				while (re != 0)
				{
					write(1, &c, 1);
					re--;
				}
			}
			else
				write(1, &c, 1);
			i++;
		}		
	}
	write (1, "\n", 1);
}
