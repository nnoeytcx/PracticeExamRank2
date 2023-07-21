/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:52:58 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/17 16:09:55 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	char	c;
	char	p;
	int	f;

	i = 1;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			p = argv[1][i - 1];
			c = argv[1][i];
			if ((p == ' ' || p == '\t'))
			{
				if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
				{
					f = i;
				}
			}
			i++;
		}
		while ((argv[1][f] != ' ' && argv[1][f] != '\t') && argv[1][f] != '\0')
		{
			ft_putchar(argv[1][f]);
			f++;
		}
	}
	ft_putchar('\n');
}
