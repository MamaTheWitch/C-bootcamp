/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:56:18 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/02 19:37:45 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	*a;
	int	*b;
	int value_a;
	int value_b;

	value_a = 9;
	value_b = 6;
	a = &value_a;
	b = &value_b;
	ft_swap(a, b);
	printf("%d", *a);
	printf("%d", *b);
	return (0);
}
