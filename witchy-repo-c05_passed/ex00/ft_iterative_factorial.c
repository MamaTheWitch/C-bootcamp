/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:36:06 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/10 18:28:39 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fak;

	i = 1;
	fak = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		while (i <= nb)
		{
			fak = fak * i;
			i++;
		}
		return (fak);
	}
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	printf("%d", ft_iterative_factorial(0));
	printf("%d", ft_iterative_factorial(-1));
}
*/
