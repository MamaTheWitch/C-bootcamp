/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:55:30 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/02 16:15:54 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	r;
	int	*********point9;
	int ********point8;
	int *******point7;
	int ******point6;
	int *****point5;
	int ****point4;
	int ***point3;
	int **point2;
	int *point;

	r = 33;
	point = &r;
	point2 = &point;
	point3 = &point2;
	point4 = &point3;
	point5 = &point4;
	point6 = &point5;
	point7 = &point6;
	point8 = &point7;
	point9 = &point8;
	ft_ultimate_ft(point9);
	printf("%d", *********point9);
	return (0);
}
//	printf("%d", r); // this line works, same output as above
//	write (1, *point, 8); // this line doesn't work, gave up
