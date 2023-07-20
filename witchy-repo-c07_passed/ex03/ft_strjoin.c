/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:04:15 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/18 12:27:50 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
//#include <stdio.h>

int		ft_size(char *s);
char	*ft_makedest(char **strs, char *sep, int len, char *dest);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		y;
	int		total_size;

	y = 0;
	total_size = 0;
	if (size < 1)
	{
		dest = malloc(1);
		dest[0] = '\0';
		return (dest);
	}
	while (y < size)
		total_size = total_size + ft_size(strs[y++]);
	total_size = total_size + ((size - 1) * ft_size(sep)) + 1;
	dest = malloc(total_size);
	if (!dest)
		return (0);
	ft_makedest(strs, sep, size, dest);
	dest = ft_makedest(strs, sep, size, dest);
	return (dest);
}

int	ft_size(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_makedest(char **strs, char *sep, int len, char *dest)
{
	int	x;
	int	y;
	int	i;

	x = 0;
	y = 0;
	while (y < len)
	{
		i = 0;
		while (strs[y][i])
			dest[x++] = strs[y][i++];
		y++;
		i = 0;
		while ((y < len) && (sep[i] != '\0'))
			dest[x++] = sep[i++];
	}
	dest[x] = '\0';
	return (dest);
}
/*
int	main(void)
{
char	*sep = ", Morty!";
char	*strs[] = {"I turned myself into a pickle", " I'm pickle-Riiick", "!!"};
char	*separator = "|";
char	*strings[] = {};
int size = sizeof(strs)/sizeof(strs[0]);
int len = sizeof(strings)/sizeof(strings[0]);
printf("%s\n", ft_strjoin(len, strings, separator));
printf("%s", ft_strjoin(size, strs, sep));
return (0);
}
*/
