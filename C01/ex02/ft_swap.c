/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:12:46 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/12 10:43:39 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 52;
	y = 7;
	printf("a = %d , b = %d\n", x, y);
	ft_swap(&x, &y);
	printf("a = %d , b = %d\n", x, y);
	return(0);
}*/
