/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 22:56:19 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/16 23:33:30 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	strcat_custom(char *dest, const char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

int	get_size(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	divide_number(char *str, int *array)
{
	int	i;
	int	j;
	int	digit;
	int	number;

	i = (get_size(str) - 1);
	digit = 1;
	j = 0;
	while (i >= 0)
	{
		number = str[i] - '0';
		if (number > 0)
		{
			if (str[i - 1] != '\0' && (digit == 1 || digit == 1000 || digit == 1000000) && str[i - 1] == '1')
			{
				if (digit != 1)
				{
					array[j] = digit;
					j++;
				}
				number += 10;
				array[j] = number;
				i--;
				digit *= 10;
			}
			else if (j != 0 && digit > 99)
			{
				if (digit == 10000)
				{
					if (str[i] == 0)
					{
						array[j] = 1000;
						j++;
					}
					array[j] = 10 * number;
				}
				else if (digit == 100000)
				{
					if (str[i + 1] == 0)
					{
						array[j] = 1000;
						j++;
					}
					array[j] = 100;
					j++;
					array[j] = number;
				}
				else if (digit == 10000000)
				{
					if (str[i] == 0)
					{
						array[j] = 1000000;
						j++;
					}
					array[j] = 10 * number;
				}
				else if (digit == 100000000)
				{
					if (str[i + 1] == 0)
					{
						array[j] = 1000000;
						j++;
					}
					array[j] = 100;
					j++;
					array[j] = number;
				}
				else
				{
					array[j] = digit;
					j++;
					array[j] = number;
				}
			}
			else
			{
				number *= digit;
				array[j] = number;
			}
			j++;
		}
		i--;
		digit *= 10;
	}
	return (j);
}

void	get_written_number(int number, char *output_string)
{
	char	*written_number;

	if (number == 0)
		written_number = "zero ";
	else if (number == 1)
		written_number = "one ";
	else if (number == 2)
		written_number = "two ";
	else if (number == 3)
		written_number = "three ";
	else if (number == 4)
		written_number = "four ";
	else if (number == 5)
		written_number = "five ";
	else if (number == 6)
		written_number = "six ";
	else if (number == 7)
		written_number = "seven ";
	else if (number == 8)
		written_number = "eight ";
	else if (number == 9)
		written_number = "nine ";
	else if (number == 10)
		written_number = "ten ";
	else if (number == 11)
		written_number = "eleven ";
	else if (number == 12)
		written_number = "twelve ";
	else if (number == 13)
		written_number = "thirteen ";
	else if (number == 14)
		written_number = "fourteen ";
	else if (number == 15)
		written_number = "fifteen ";
	else if (number == 16)
		written_number = "sixteen ";
	else if (number == 17)
		written_number = "seventeen ";
	else if (number == 18)
		written_number = "eighteen ";
	else if (number == 19)
		written_number = "nineteen ";
	else if (number == 20)
		written_number = "twenty ";
	else if (number == 30)
		written_number = "thirty ";
	else if (number == 40)
		written_number = "forty ";
	else if (number == 50)
		written_number = "fifty ";
	else if (number == 60)
		written_number = "sixty ";
	else if (number == 70)
		written_number = "seventy ";
	else if (number == 80)
		written_number = "eighty ";
	else if (number == 90)
		written_number = "ninety ";
	else if (number == 100)
		written_number = "hundred ";
	else if (number == 1000)
		written_number = "thousand ";
	else if (number == 1000000)
		written_number = "million ";
	else if (number == 1000000000)
		written_number = "billion ";
	else
		written_number = "unknown ";
	strcat_custom(output_string, written_number);
}

void	print_output(char *output_string)
{
	while (*output_string != '\0')
	{
		write(1, output_string, 1);
		output_string++;
	}
}

void	get_written_numbers(int *array, int size)
{
	char	*output_string;
	int		number;

	output_string = (char *)malloc(11 * 1);
	while (size >= 0)
	{
		number = array[size];
		get_written_number(number, output_string);
		size--;
	}
	print_output(output_string);
	free(output_string);
}

int	main(int argc, char *argv[])
{
	int	size;
	int	*array;
	int	end_of_array;

	if (argc == 2)
	{
		char	*input = argv[1];
		size = 0;
		while (input[size] != '\0')
			size++;
		size *= 2;
		array = (int *)malloc(size * 4);
		end_of_array = divide_number(input, array);
		get_written_numbers(array, end_of_array - 1);
		free(array);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
