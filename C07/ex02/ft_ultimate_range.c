/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:43:55 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/25 18:07:32 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (size);
}
/*
int	main()
{
	int	*range;
	int	size;
	int	min;
	int	max;

	printf("input min:");
	scanf("%d", &min);
	printf("input max:");
	scanf("%d", &max);
	printf("min: %d\n", min);
	printf("max: %d\n", max);
	size = ft_ultimate_range(&range,min,max);
	printf("size: %d\n", size);
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			printf("%d ", range[i]);
		}
		printf("\n");
		free(range);
	}
	else if (size == 0)
		printf("invalid: min >= max\n");
	else
		printf("memory failed, %d\n", size);
	return (0);
}*/
