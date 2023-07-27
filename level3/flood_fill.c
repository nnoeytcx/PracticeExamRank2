/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:27:57 by tpoungla          #+#    #+#             */
/*   Updated: 2023/07/27 14:10:51 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct s_point
{
	int	x;
	int	y;
}		t_point;

void	fill(t_point pos, char **tab, t_point size, char c)
{
	if (pos.x < 0 || pos.y < 0 || pos.x >= size.x || pos.y >= size.y || tab[pos.y][pos.x] != c)
		return ;
	tab[pos.y][pos.x] = 'F';
	fill((t_point){pos.x - 1, pos.y}, tab, size, c);
	fill((t_point){pos.x + 1, pos.y}, tab, size, c);
	fill((t_point){pos.x, pos.y - 1}, tab, size, c);
	fill((t_point){pos.x, pos.y + 1}, tab, size, c);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill (begin, tab, size, tab[begin.y][begin.x]);
}

#include <stdlib.h>
#include <stdio.h>

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	printf("result\n");
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
