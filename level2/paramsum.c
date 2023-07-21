/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:10:58 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/18 14:19:40 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchr(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	char	i;

	if (num >= 10)
		ft_putnbr(num / 10);
	i = (num%10) + '0';
	write(1, &i, 1);
}

int	main(int ac, char *av[])
{
	ac = ac - 1;
	(void) av;
	ft_putnbr(ac);
	ft_putchr('\n');
}
