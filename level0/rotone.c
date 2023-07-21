/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 04:30:54 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/19 04:35:35 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i = 0;
	char c;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = argv[1][i];
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c<= 'Z'))
			{
				if (c == 'z')
					c = 'a';
				else if (c == 'Z')
					c = 'A';
				else
					c++;
			}
			i++;
			write(1, &c, 1);
		}	
	}
	write(1, "\n", 1);
}
