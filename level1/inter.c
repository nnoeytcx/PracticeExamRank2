/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:39:02 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/18 14:09:05 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchr(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	k;
	char	*str1;
	char	*str2;

	if (argc == 3)
	{
		i = 0;
		str1 = argv[1];
		str2 = argv[2];
		while (str1[i])
		{
			j = 0;
			k = 0;
			while (j < i)
			{
				if (str1[i] == str1[j])
					k++;
				j++;
			}
			if (k == 0)
			{
				j = 0;
				while (str2[j])
				{
					if (str2[j] == str1[i])
					{
						ft_putchr(str1[i]);
						break ;
					}
					j++;
				}
			}
			i++;
		}
	}
	ft_putchr('\n');
}
