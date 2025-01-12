/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:23:46 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/15 16:36:13 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i = i +1;
	}
	return (str);
}
/*
int	main(void)
{
	char	s1[] = "Hello Hiversza";
	char	s2[] = "Welcome to heLZ";
	char	s3[] = "I'M RAMON";
	char	s4[] = "ZazA12345%$!@%^&*ZazA";
	printf("My string is: %s\n", ft_strlowcase(s1));
	printf("My string is: %s\n", ft_strlowcase(s2));
	printf("My string is: %s\n", ft_strlowcase(s3));
	printf("My string is: %s\n", ft_strlowcase(s4));
	return(0);
}
*/
