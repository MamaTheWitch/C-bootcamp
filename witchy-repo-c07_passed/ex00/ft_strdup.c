/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:56:58 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/12 20:06:33 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_size(char *s);

char	*ft_strdup(char *src)
{
	char	*dest;
	int		x;

	x = 0;
	dest = malloc(ft_size(src + 1));
	if (!dest)
		return (0);
	else
	{
		while (src[x])
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
		return (dest);
	}
}

int	ft_size(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	*src = "Hello, my friend!";
	
	printf("%s", ft_strdup(src));
	return (0);
}
*/
