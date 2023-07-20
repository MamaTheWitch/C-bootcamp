/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:34:45 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/19 17:34:51 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str);
char *ft_copy(char *dest, char *src);
int ft_total(int ac, char **av);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

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
	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

int	ft_total(int ac, char **av)
{
int	y;
int	total;

y = 0;
total = 6;
while (y < ac)
	total = total + 6 + 2*(ft_strlen(av[y++]));
return (total);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
struct s_stock_str *arr; //	t_stock_str *arr; - would it work too?

	arr = malloc(ft_total(ac, av)); 
	if (!arr)
	{
		arr = NULL;
		return (arr);
	}	
	int y = 0;
	while (y < ac)
	{
		arr[y].size = ft_strlen(av[y]);
		arr[y].str = av[y];
		arr[y].copy = ft_copy(arr[y].copy, av[y]);
		y++;
	}
	arr[y].size = 1;
	arr[y].str = 0;
	arr[y].copy = ft_copy(arr[y].copy, arr[y].str);
	return (arr);
}

int main(void)
{
	int i = 0;
	char	*strs[] = {"I am a string", "I'm string 2", "I am the last"};
	int size = sizeof(strs)/sizeof(strs[0]);
	while (i <= size)
	{
		printf("%d", ft_strs_to_tab(size, strs)[i].size);
		printf("%s", ft_strs_to_tab(size, strs)[i].copy);
		i++;
	}
	return (0);
}
