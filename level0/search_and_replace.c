/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 10:33:01 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/20 10:40:35 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i;
	char c;
	char r;
	if (argc == 4)
	{
		i = 0;
		c = argv[2][0];
		r = argv[3][0];
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
		{
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				if ((r >= 'a' && r <= 'z') || (r >= 'A' && r <= 'Z'))
				{
					while (argv[1][i])
					{
						if (argv[1][i] == c)
							argv[1][i] = r;
						write(1, &argv[1][i], 1);
						i++;
					}
				}
			}
		}
	}
	write(1, "\n", 1);
}
