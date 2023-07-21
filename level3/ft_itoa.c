/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:31:53 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/18 15:43:00 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	getlen 	(int num)
{
	int len = 0;

	if (num < 0)
		len++;
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int	len;
	long	num = nbr;

	len = getlen(nbr);
	res = malloc(sizeof(char) * (len + 1));
	res[len] = '\0';

	if (num < 0)
		res[0] = '-';
	else if (num == 0)
		res[0] = '0';

	while (num != 0)
	{
		--len;
		if (num < 0)
			num *= -1;
		res[len] = (num%10) + '0';
		num /= 10;
	}
	return (res);
}
/*#include <stdio.h>
#include <limits.h>
int		main(void)
{
	int d = INT_MIN;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = -13;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = 0;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = 5;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = INT_MAX;
	printf("%d =? %s\n", d, ft_itoa(d));
}*/
