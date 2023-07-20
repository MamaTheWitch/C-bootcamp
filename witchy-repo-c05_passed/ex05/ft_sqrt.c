/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:24:17 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/11 19:44:32 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <limits.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	result;

	result = 1;
	i = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (result < nb)
		{
			result = i * i;
			i++;
		}
		if (result != nb)
			return (0);
		return (i - 1);
	}
}
/*
int	main(void)
{
	printf("%d %s", ft_sqrt(-9), "\n");
	printf("%d %s", ft_sqrt(1), "\n");
	printf("%d %s", ft_sqrt(0), "\n");
	printf("%d %s", ft_sqrt(81), "\n");
	printf("%d %s", ft_sqrt(5), "\n");
	printf("%d %s", ft_sqrt(INT_MAX), "\n");
}
*/
