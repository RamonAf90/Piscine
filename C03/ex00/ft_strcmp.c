/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:37:50 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/15 17:52:27 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "heLlo";
	char	s2[] = "heLlo";
	char	s3[] = "heLmingo";
	char	s4[] = "Hey";

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s2, s3));
	printf("%d\n", ft_strcmp(s2, s4));
	return (0);
}
*/
