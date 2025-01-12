/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:55:10 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/15 18:07:35 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "heLlo";
	char	s2[] = "heLlo";
	char	s3[] = "heLmingo";
	char	s4[] = "Hey";

	printf("5 char: %d\n", ft_strncmp(s1, s2, 5));
	printf("5 char: %d\n", ft_strncmp(s2, s3, 5));
	printf("3 char: %d\n", ft_strncmp(s2, s3, 3));
	printf("3 char: %d\n", ft_strncmp(s2, s4, 3));
	return (0);
}
*/
