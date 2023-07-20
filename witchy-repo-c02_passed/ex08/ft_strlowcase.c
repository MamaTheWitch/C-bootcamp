/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:35:59 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/05 17:39:15 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((64 < str[i]) && (str[i] < 91))
		{
			str[i] = str[i] + 32;
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

	printf("%s", ft_strlowcase(str));
	return (0);
}
*/
