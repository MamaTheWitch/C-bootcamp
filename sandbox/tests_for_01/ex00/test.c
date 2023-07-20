/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:55:30 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/02 14:25:54 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	r;
	int	*point;

	r = 33;
	point = &r;
	ft_ft(point);
	printf("%d", r);
	return (0);
}
//	printf("%d", *point); // this line works, same output as above
//	write (1, *point, 8); // this line doesn't work, gave up
