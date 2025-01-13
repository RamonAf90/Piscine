/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 21:45:32 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/22 14:41:37 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main()
{
	printf(" -4th fib: %d\n", ft_fibonacci(-4));
	printf(" 0th fib: %d\n", ft_fibonacci(0));
	printf(" 1th fib: %d\n", ft_fibonacci(1));
	printf(" 2th fib: %d\n", ft_fibonacci(2));
	printf(" 3th fib: %d\n", ft_fibonacci(3));
	printf(" 4th fib: %d\n", ft_fibonacci(4));
	printf(" 5th fib: %d\n", ft_fibonacci(5));
	printf(" 6th fib: %d\n", ft_fibonacci(6));
	printf(" 7th fib: %d\n", ft_fibonacci(7));
	printf(" 8th fib: %d\n", ft_fibonacci(8));
	printf(" 9th fib: %d\n", ft_fibonacci(9));
	return (0);
}*/
