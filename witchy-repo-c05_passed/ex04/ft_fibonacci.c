/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:37:04 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/11 16:22:42 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if ((index == 0) || (index == 1))
	{
		return (index);
	}
	else if (index < 0)
	{
		return (-1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	printf("%d %s", ft_fibonacci(-9), "\n");
	printf("%d %s", ft_fibonacci(10), "\n");
	printf("%d %s", ft_fibonacci(0), "\n");
}
*/
