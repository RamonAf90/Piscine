/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 20:45:29 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/22 13:20:17 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	power--;
	return (nb * ft_recursive_power(nb, power));
}
/*
int	main(void)
{
	printf("0^-1 res: %d\n", ft_recursive_power(0, -1));
	printf("2^4 res: %d\n", ft_recursive_power(2, 4));
        printf("4^3 res: %d\n", ft_recursive_power(4, 3));
        printf("0^0 res: %d\n", ft_recursive_power(0, 0));
        printf("2^0 res: %d\n", ft_recursive_power(2, 0));
        printf("0^4 res: %d\n", ft_recursive_power(0, 4));

	return (0);
}*/
