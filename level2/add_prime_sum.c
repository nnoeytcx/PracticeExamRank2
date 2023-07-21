/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:18:47 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/20 12:48:11 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_prime(int num)
{
	int i = 2;
	while (i < num)
	{
		if (num%i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int num = 0;
	int i = 0;
	int sig = 1;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig = -1;
		i++;
	}
	while (str[i])
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num);

}

void	ft_putnbr(int num)
{
	char c;
	if (num > 9)
		ft_putnbr(num/10);
	c = (num%10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int num;
	int i = 2;
	int sum = 0;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		if (num >= 2)
		{
			while (i <= num)
			{
				if (is_prime(i))
				{
					sum += i;
				}
				i++;
			}
		}
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
}
