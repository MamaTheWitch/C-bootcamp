/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 22:19:13 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/15 23:03:08 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char **split_buffer(char *str)
{
	int i = 0;
	int x = 0;
	int y;
	char **lines;
	
	while (str[i])
	{
		y = 0;
		while (str[i] != '\n')
		{
			lines[x][y] = str[i];
			i++;
			y++;
		}
		i++;
		lines[x][y] = '\0';
		x++;
	}
	return (lines);
}

int *get_nbr_arr(char **lines)
{
	int *number;
	int i = 0;
	int x = 0;
	int y = 0;

	while (lines[x])
	{
		i = 0;
		while (lines[x][i] >= 48 && lines[x][i] <= 57)
		{
			number[y] *= 10;
			number[y] += lines[x][i] - 48;
			i++;
		}
		x++;
		y++;
	}
	return (number);
}

char *get_word_arr(char **lines)
{
	char *words;
	int i;
	int x = 0;
	int y = 0;
	int z;

	while (lines[x])
	{
		i = 0;
		z = 0;
		while (lines[x][i] != 58)
			i++;
		i++;
		while (lines[x][i] < 33)
			i++;
		while (lines[x][i] != '\0')
		{
			words[y][z] = lines[x][i];
			i++;
			z++;
		}
		x++;
		y++;
	}
	return (words);
}




