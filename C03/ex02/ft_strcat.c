/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:27:59 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/16 17:37:04 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s1[] = "heLlo";
	char	s2[] = "heLlo";
	char	s3[] = "heLmingo";
	char	s4[] = "Hey";

	printf("5 char: %s\n", ft_strcat(s1, s2));
	printf("5 char: %s\n", ft_strcat(s2, s3));
	printf("3 char: %s\n", ft_strcat(s2, s3));
	printf("3 char: %s\n", ft_strcat(s2, s4));
	return (0);
}
*/
