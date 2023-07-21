/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 06:15:57 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/19 06:54:29 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	skip(int i, char *str)
{
	while (str[i] == ' ' || str[i] == '\t')
		++i;
	return (i);
}

int	wordlen(char *str)
{
	int i = 0;
	while(str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int fl = 1;
	int len;
	int i = 0;

	if (argc == 2)
	{
		i = skip(i, argv[1]);
		while (argv[1][i])
		{
			if (fl == 0)
				write(1, " ", 1);
			len = wordlen(argv[1] + i);
			write(1, argv[1] + i, len);
			i += len;
			fl = 0;
			i = skip(i, argv[1]);
		}
	}
	write(1, "\n", 1);
}
