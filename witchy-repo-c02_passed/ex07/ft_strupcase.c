/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:12:02 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/05 17:34:14 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((96 < str[i]) && (str[i] < 123))
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
		{
			i++;
		}	
	}
	return (str);
}
/*
int	main(void)
{
	char	str[20] = "Hi thERe";

	printf("%s", ft_strupcase(str));
	return (0);
}
*/
