/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mul.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 23:13:42 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/19 23:38:34 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int nbr = 0, i = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (nbr);
}

void	ft_putnbr(int num)
{
	if (num > 9)
		ft_putnbr(num/10);
	char c = (num%10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int num, i = 0;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		while (i < 9)
		{
			ft_putnbr(i + 1);
			write(1, " x ", 3);
			ft_putnbr(num);
			write(1, " = ", 3);
			ft_putnbr((i + 1) * num);
			i++;
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
}
