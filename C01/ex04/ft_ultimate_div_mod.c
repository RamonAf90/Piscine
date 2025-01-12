/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:42:03 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/12 11:05:19 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 7;
	y = 2;
	printf(" x = %d , y = %d", x, y);
	ft_ultimate_div_mod(&x,&y);
	printf(" x = %d , y = %d", x, y);
	return(0);
}*/
