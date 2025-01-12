/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:38:50 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/16 17:51:25 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
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

	printf("5 char: %s\n", ft_strncat(s1, s2, 5));
	printf("5 char: %s\n", ft_strncat(s2, s3, 5));
	printf("3 char: %s\n", ft_strncat(s2, s3, 3));
	printf("3 char: %s\n", ft_strncat(s2, s4, 3));
	return (0);
}
*/
