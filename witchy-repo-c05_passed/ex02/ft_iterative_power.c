/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:49:01 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/12 12:21:04 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		while (i <= power)
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
}
/*
int	main(void)
{
	printf("%d \n", ft_iterative_power(-8, 0));
	printf("%d \n", ft_iterative_power(0, 8));
	printf("%d \n", ft_iterative_power(-2, 3));
	printf("%d \n", ft_iterative_power(2, 3));
}
*/
