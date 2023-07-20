/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:05:47 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/17 22:08:22 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
//#include <stdio.h>
//#include <limits.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*arr;
	long	i;
	long	size;
	long	len;

	if (!range)
		return (-1);
	len = max - min;
	if (len < 1)
		return (0);
	size = 4 * len;
	arr = malloc(size);
	if (!arr)
		return (-1);
	*range = arr;
	i = 0;
	while (i < len)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (len);
}
/*
int	main(void)
{
	int min = 2;
	int max = 8;
	int *p;
	p = malloc(4 * (max - min));
	int **range = &p;
	printf("%d \n", ft_ultimate_range(range, min, max));
	printf("%d \n", ft_ultimate_range(NULL, min, max));
	printf("%d \n", ft_ultimate_range(range, 0, INT_MAX));
	printf("%d \n", ft_ultimate_range(range, INT_MIN, INT_MAX));
	return (0);
}
*/
