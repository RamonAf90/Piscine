/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:46:07 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/22 13:34:49 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("9: %d^2\n", ft_sqrt(9));
	printf("16: %d^2\n", ft_sqrt(16));
	printf("2: %d^2\n", ft_sqrt(2));
	printf("-4: %d^2\n", ft_sqrt(-4));
	return (0);
}*/
