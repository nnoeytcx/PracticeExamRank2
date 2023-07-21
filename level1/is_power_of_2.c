/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 02:18:37 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/19 02:34:07 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (n%2 == 0)
			n/=2;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", is_power_of_2(-3));
	//printf("%d\n", is_power_of_2(0));
	//printf("%d\n", is_power_of_2(2));
	//printf("%d\n", is_power_of_2(3));
	//printf("%d\n", is_power_of_2(4));
	//printf("%d\n", is_power_of_2(5));
	//printf("%d\n", is_power_of_2(8));
}*/
