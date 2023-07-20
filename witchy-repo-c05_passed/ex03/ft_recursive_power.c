/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:35:57 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/12 12:21:51 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
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
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
/*
int	main(void)
{
	printf("%d \n", ft_recursive_power(-8, 0));
	printf("%d \n", ft_recursive_power(0, 8));
	printf("%d \n", ft_recursive_power(-2, 3));
	printf("%d \n", ft_recursive_power(2, 3));
}
*/
