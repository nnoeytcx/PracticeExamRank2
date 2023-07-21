/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:22:34 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/19 21:39:30 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	getlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int len;
	if (argc == 2)
	{
		len = getlen(argv[1]);
		while (len != 0)
		{
			write(1, &argv[1][len - 1], 1);
			len--;
		}
	}
	write(1, "\n", 1);
}
