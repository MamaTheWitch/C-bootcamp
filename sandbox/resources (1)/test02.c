/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuojua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:26:30 by rnuojua           #+#    #+#             */
/*   Updated: 2023/07/03 14:26:41 by rnuojua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);

int	main(int argc, char **argv)
{
	int		len;
	char	*src;
	char	*dest;

	if (argc != 2)
		return (-1);
	src = argv[1];
	len = 1; /* atleast 1 byte string from args ("\0") */
	while (src[len])
		len++;
	dest = malloc(len);


	write(1, "src\n", 4);
	write(1, src, len);
	write(1, "\n\n", 2);

	ft_strcpy(dest, src);
	write(1, "0\n", 2);
	write(1, dest, len);
	write(1, "\n\n", 2);

	ft_strncpy(dest, src, len);
	write(1, "1\n", 2);
	write(1, dest, len);
	write(1, "\n\n", 2);

	write(1, "2\n", 2);
	if (ft_str_is_alpha(src))
		write(1, "is     alpha", 12);
	else
		write(1, "is NOT alpha", 12);
	write(1, "\n\n", 2);

	write(1, "3\n", 2);
	if (ft_str_is_numeric(src))
		write(1, "is     numer", 12);
	else
		write(1, "is NOT numer", 12);
	write(1, "\n\n", 2);

	write(1, "4\n", 2);
	if (ft_str_is_lowercase(src))
		write(1, "is     lower", 12);
	else
		write(1, "is NOT lower", 12);
	write(1, "\n\n", 2);

	write(1, "5\n", 2);
	if (ft_str_is_uppercase(src))
		write(1, "is     upper", 12);
	else
		write(1, "is NOT upper", 12);
	write(1, "\n\n", 2);

	write(1, "6\n", 2);
	if (ft_str_is_printable(src))
		write(1, "is     print", 12);
	else
		write(1, "is NOT print", 12);
	write(1, "\n\n", 2);


	ft_strcpy(dest, src);
	ft_strupcase(dest);
	write(1, "7\n", 2);
	write(1, dest, len);
	write(1, "\n\n", 2);

	ft_strcpy(dest, src);
	ft_strlowcase(dest);
	write(1, "8\n", 2);
	write(1, dest, len);
	write(1, "\n\n", 2);

	ft_strcpy(dest, src);
	ft_strcapitalize(dest);
	write(1, "9\n", 2);
	write(1, dest, len);
	write(1, "\n\n", 2);
}
