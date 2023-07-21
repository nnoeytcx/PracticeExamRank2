/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:47:00 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/19 00:44:39 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 7;

	while (i >= 0)
	{
		if (octet & (1 << i))
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}	
}
/*#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
    unsigned char octet;

    if (argc == 2)

    octet = atoi(argv[1]);
    print_bits(2);
    printf("\n");

    return 0;

}*/
