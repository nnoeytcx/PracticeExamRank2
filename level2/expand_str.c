/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:51:55 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/19 18:23:32 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	skip(int i, char *str)
{
	if (str[i] == ' ' || str[i] == '\t')
		++i;
	return (i);
}

int	wordlen(char *str)
{
	int len = 0;
	while (str[len] && str[len] != ' ' && str[len] != '\t')
		len++;
	return (len);
}

int	main(int argc, char *argv[])
{
	int fl = 0;
	int len;
	int i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			i = skip(i, argv[1]);
			len = wordlen(argv[1] + i);
			if (len > 0 && fl == 1)
				write (1, "   ", 3);
			fl = 1;
			write(1, argv[1] + i, len);
			i += len;
		}
	}
	write(1, "\n", 1);
}
