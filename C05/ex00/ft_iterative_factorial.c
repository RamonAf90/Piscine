/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:49:18 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/22 13:12:17 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		i = nb - 1;
		while (i > 0)
		{
			nb *= i;
			i--;
		}
		return (nb);
	}
}
/*
int	main()
{
	printf("4! = %d\n", ft_iterative_factorial(4));
	printf("0! = %d\n", ft_iterative_factorial(0));
	printf("1! = %d\n", ft_iterative_factorial(1));
	printf("30! = %d\n", ft_iterative_factorial(30));
	printf("-5! = %d\n", ft_iterative_factorial(-5));
	return (0);
}*/
