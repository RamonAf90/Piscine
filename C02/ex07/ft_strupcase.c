/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:47:15 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/15 16:21:53 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i = i +1;
	}
	return (str);
}
/*
int	main(void)
{
	char	s1[] = "Hello Hivers";
	char	s2[] = "welcome to hel";
	char	s3[] = "I'M RAMON";
	char	s4[] = "12345%$!@%^&*";
	printf("My string is: %s\n", ft_strupcase(s1));
	printf("My string is: %s\n", ft_strupcase(s2));
	printf("My string is: %s\n", ft_strupcase(s3));
	printf("My string is: %s\n", ft_strupcase(s4));
	return(0);
}
*/
