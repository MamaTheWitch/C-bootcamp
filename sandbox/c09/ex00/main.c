/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalasin <rvalasin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:53:53 by rvalasin          #+#    #+#             */
/*   Updated: 2023/07/19 20:05:31 by rvalasin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_putchar(char c);
void ft_putstr(char *str);
int ft_strlen(char *str);

int main(void)
{
char *str = "Hello There!";
ft_putstr(str);
ft_putchar('\n');
printf("%d", ft_strlen(str));
return (0);
}
