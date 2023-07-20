/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 16:49:53 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/08 17:47:56 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//you can also write the same int main (int argc, char **argv)

int	main(int argc, char *argv[])
{
	int i;
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{	
			write (1, &argv[1][i], 1);
			i++;
		}
	}	
return (0);
}

/*
 argc is total amount of arguments entered
 argv is a pointer to an array, or pointer to a pointer to a first char of an array
 *argv[0] is a pointer to a filename
 *argv[1] is a pointer to the first string entered
 *argv[2] is a pointer to the second string entered
 */

/*
-----THIS PRINTS INPUTED STRINGS FROM LAST TO FIRST-----
while (--argc > 0)
{
printf("%s", argv[argc]);
printf("\n");
}
*/
