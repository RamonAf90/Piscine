/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:58:38 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/22 13:16:17 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	printf("factorial 4 is : %d\n", ft_recursive_factorial(4));
	printf("factorial 1 is : %d\n", ft_recursive_factorial(1));
	printf("factorial 0 is : %d\n", ft_recursive_factorial(0));
	printf("factorial -5 is : %d\n", ft_recursive_factorial(-5));
	printf("factorial 30 is : %d\n", ft_recursive_factorial(30));
	return (0);
}*/
