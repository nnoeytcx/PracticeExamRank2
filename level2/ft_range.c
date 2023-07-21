/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:11:14 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/17 13:26:24 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	len;
	int	*num;
	int	i;
	int	j;

	len = start - end;
	if (len < 0)
		len *= -1;
	len++;
	num = malloc(sizeof(int) * (len + 1));
	i = start;
	j = 0;
	while (len != 0)
	{
		num[j] = i;
		if (start < end)
			i++;
		else
			i--;
		j++;
		len--;
	}
	return (num);
}

/*int	main(void)
{
	int	*num;
	int	i;

	i = 0;
	num = ft_range(1, 3);
	while (num[i])
	{	
		printf("%d -> ", num[i]);
		i++;
	}
}*/
