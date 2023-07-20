/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:49:33 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/10 17:05:46 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <limits.h>

void	ft_convert(int nb);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if ((nb < 0) && (nb != -2147483648))
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	ft_convert(nb);
}

void	ft_convert(int nb)
{
	char	ca[12];
	int		i;

	i = 0;
	while (nb != 0)
	{
		ca[i] = '0' + (nb % 10);
		nb = nb / 10;
		i++;
	}
	ca[i] = '\0';
	i = 0;
	while (ca[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		write(1, &ca[i - 1], 1);
		i--;
	}
}
/*
int	main(void)
{
	ft_putnbr(INT_MAX);
	ft_putnbr(INT_MIN);
	ft_putnbr(0);
	ft_putnbr(-1234);
	return (0);
}
*/
