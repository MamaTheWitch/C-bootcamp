/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:43:19 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/17 22:06:01 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
//#include <stdio.h>
//#include <limits.h>

int	*ft_range(int min, int max)
{
	int		*arr;
	long	i;
	long	size;
	long	len;

	len = max - min;
	if (len < 1)
		return (0);
	size = 4 * len;
	arr = malloc(size);
	if (!arr)
		return (0);
	i = 0;
	while (i < len)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
/*
int	main(void)
{
	int min = -9;
	int max = 9;
	long i = 0;
	int *p = ft_range(min, max);
	while (i < (max-min))
		printf("%d,", p[i++]);
	return (0);
}
*/
