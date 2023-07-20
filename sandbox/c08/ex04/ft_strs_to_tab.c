/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <rvalasin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:42:11 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/20 14:42:26 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>
//#include <stdio.h>

int					ft_strlen(char *str);
char				*ft_copy(char *dest, char *src);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_copy(char *dest, char *src)
{
	int		x;

	x = 0;
	dest = malloc(ft_strlen(src) + 1);
	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			y;

	arr = malloc((ac + 1) * sizeof(t_stock_str));
	if (!arr)
	{
		arr = NULL;
		return (arr);
	}	
	y = 0;
	while (y < ac)
	{
		arr[y].size = ft_strlen(av[y]);
		arr[y].str = av[y];
		arr[y].copy = ft_copy(arr[y].copy, av[y]);
		y++;
	}
	arr[y].size = 0;
	arr[y].str = 0;
	arr[y].copy = 0;
	return (arr);
}
/*
int main(void)
{
	int i = 0;
	char	*strs[] = {"I am a string", "I'm string 2", "I am the last"};
	int size = sizeof(strs)/sizeof(strs[0]);
	while (i <= size)
	{
		printf("%d\n", ft_strs_to_tab(size, strs)[i].size);
		printf("%s\n", ft_strs_to_tab(size, strs)[i].copy);
		i++;
	}
	return (0);
}*/
