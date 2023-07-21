/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 05:56:21 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/19 06:01:01 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*#include <stdio.h>
int main(void)
{
	int a = 3;
	int b = 8;
	printf("%d %d\n",a,b);
	ft_swap(&a, &b);
	printf("%d %d",a,b);
}*/
