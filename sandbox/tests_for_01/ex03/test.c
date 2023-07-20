/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:52:57 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/03 11:18:05 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	*div;
	int	*mod;
	int	a;
	int	b;

	div = &a;
	mod = &b;
	ft_div_mod(8, 4, div, mod);
	printf("%d", *div);
	printf("%d", *mod);
	return (0);
}
