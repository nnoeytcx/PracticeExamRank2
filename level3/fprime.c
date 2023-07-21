/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 04:03:19 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/19 04:15:44 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	is_prime(int num)
{
	int i = 2;

	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}



int	main(int argc, char *argv[])
{
	int flag = 1;
	int fac = 2;
	int n;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n == 1)
			printf("1");
		while (fac <= n)
		{
			if (n%fac==0 && is_prime(fac))
			{
				if (flag)
				{
					printf("%d", fac);
					flag = 0;
				}
				else
					printf("*%d", fac);
				n /= fac;
			}
			else
				fac++;
		}
	}
	printf("\n");
}
