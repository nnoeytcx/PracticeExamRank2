/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 06:02:04 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/19 06:14:28 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i])
		return ((int)s1[i]);
	if (s2[i])
		return ((int)s2[i] * - 1);
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *str1 = "i knoyf";
	char *str2 = "i knoyz";

	printf("%d\n", strcmp(str1, str2));
	printf("%d", ft_strcmp(str1, str2));
}*/
