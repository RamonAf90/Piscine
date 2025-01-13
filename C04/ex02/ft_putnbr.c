/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:49:16 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/19 14:38:24 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	res[20];
	int		i;

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb >= 10)
	{
		res[i] = nb % 10;
		nb /= 10;
		i++;
	}
	res[i] = nb;
	while (i >= 0 && nb != -2147483648)
	{
		res[i] += 48;
		write(1, &res[i], 1);
		i--;
	}
}
/*
int	main(void)
{
	ft_putnbr(2587);
	return (0);
}*/
