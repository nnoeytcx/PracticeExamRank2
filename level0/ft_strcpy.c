/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:35:00 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/17 15:51:10 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*int	main(void)
{
	char *str;
	char *des;
	char *res1;
	char *res2;
	int i = 0;

	str = "i have a nice pineapple.";
	des = "123456789";
	res1 = strcpy("i am hungry", "yay");
	while (str[i++])
		printf("%c\n", str[i]);
	//res2 = ft_strcpy(des, str);
	//printf("ft_strcpy : %s\n", res2);
}*/
