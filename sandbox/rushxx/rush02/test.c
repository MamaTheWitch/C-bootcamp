/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:26:07 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/08 16:49:34 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *gets(char *str);

int	main(void)
{
	char	string[20];
	int	i;

	i = 0;
	gets(string);
	while (string[i])
	{
		write (1, &string[i], 1);
	}
	return (0);
}
// char *gets(char *str)
