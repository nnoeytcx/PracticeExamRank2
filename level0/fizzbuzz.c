/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:18:52 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/18 21:36:27 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str, int len)
{
	write(1, str, len);
}

int	main(void)
{
	int	i = 1;
	char c;

	while (i <= 100)
	{
		if (i%3 == 0 && i%5 == 0)
			ft_putstr("fizzbuzz", 8);
		else if (i%3 == 0)
			ft_putstr("fizz", 4);
		else if (i%5 == 0)
			ft_putstr("buzz", 4);
		else
		{
			if (i < 10)
			{
				c = i + '0';
				write(1, &c, 1);
			}
			else
			{
				c = (i/10) + '0';
				write(1, &c, 1);
				c = (i%10) + '0';
				write(1, &c, 1);
			}
		}
		i++;
		ft_putstr("\n", 1);
	}
}
