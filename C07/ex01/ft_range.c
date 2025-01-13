/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:09:58 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/25 18:08:14 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	range = (int *) malloc((max - min) * sizeof(int));
	i = 0;
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
int	main()
{
	int	*a;
	int	i;
	int	max;
	int	min;

	i = 0;
	printf("input min:");
	scanf("%d", &min);
	printf("input max:");
	scanf("%d", &max);
	a = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
	free(a);
	return (0);
}*/
