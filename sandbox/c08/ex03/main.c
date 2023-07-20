/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:38:07 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/18 21:06:21 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
void set_point(t_point *point)
{
point->x = 42;
point->y = 21;
}
int main(void)
{
t_point point;
set_point(&point);
return (0);
}
