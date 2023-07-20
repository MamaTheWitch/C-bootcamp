/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:42:46 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/03 13:48:00 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str);

int	main(void)
{
	char	*str;
	char	my_string[];

	my_string = "Hi, how are you?";
	str = &my_string;
	ft_putstr(str);
}
