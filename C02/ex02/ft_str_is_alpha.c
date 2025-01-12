/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:07:07 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/18 14:52:01 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str < 65 || *str > 122) || (*str > 90 && *str < 97))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "HELLO";
	char	str2[] = "Hello";
	char	str3[] = "";
	char	str4[] = "gG21F";

	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));
	printf("%d\n", ft_str_is_alpha(str4));
	return (0);
}
*/
