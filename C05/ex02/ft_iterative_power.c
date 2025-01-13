/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:35:15 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/22 13:18:14 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	res = nb * nb;
	power -= 2;
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
int	main(void)
{
	printf("2^4 res: %d\n", ft_iterative_power(2, 4));
	printf("4^3 res: %d\n", ft_iterative_power(4, 3));
	printf("0^0 res: %d\n", ft_iterative_power(0, 0));
	printf("2^0 res: %d\n", ft_iterative_power(2, 0));
	printf("0^4 res: %d\n", ft_iterative_power(0, 4));
	printf("2^-4 res: %d\n", ft_iterative_power(2, -4));
	return (0);
}*/
