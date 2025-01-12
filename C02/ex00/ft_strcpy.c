/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:05:21 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/14 19:52:04 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i = i +1;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	d[20];
	char	s[] = "Hello Hivers";
	ft_strcpy(d, s);
	printf("My string is: %s\n", d);
	return(0);
}
*/
