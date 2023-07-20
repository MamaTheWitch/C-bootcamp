/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 11:27:31 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/03 11:54:54 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	*a;
	int	*b;
	int	value_a;
	int	value_b;

	value_a = 9;
	value_b = 4;
	a = &value_a;
	b = &value_b;
	ft_ultimate_div_mod(&value_a, &value_b);
	printf("%d", *a);
	printf("%d", *b);
	return (0);
}
