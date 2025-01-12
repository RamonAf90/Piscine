/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:29:07 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/12 10:48:43 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 7;
	b = 2;
	ft_div_mod(a,b,&div,&mod);
	printf("a = %d, b = %d \n div = %d, mod = %d\n", a, b, div, mod);
	return(0);
}*/
