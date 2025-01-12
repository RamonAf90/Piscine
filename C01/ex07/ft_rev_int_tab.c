/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:18:02 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/12 11:18:58 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	t;
	int	s;
	int	e;

	s = 0;
	e = size -1;
	while (s < e)
	{
		t = tab[s];
		tab[s] = tab [e];
		tab[e] = t;
		s++;
		e--;
	}
}
/*
int	main(void)
{
	int	array[5] = {5, 6, 9, 15, 20};
	int	size = 5;

	printf("original array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	ft_rev_int_tab(array, size);

	printf("reversed array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	return (0);
}*/
