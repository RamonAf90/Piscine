/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:57:09 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/16 18:13:23 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	s1[] = "heLlo, World!";
	char	s2[] = "heLlo";
	char	s3[] = "World";
	char	s4[] = ", W";
	char	s5[] = "vcsrhfd";
	char	*r1 = ft_strstr(s1, s2);
	char    *r2 = ft_strstr(s1, s3);
	char    *r3 = ft_strstr(s1, s4);
	char    *r4 = ft_strstr(s1, s5);
	
	printf("found: %s\n", r1);
	printf("found: %s\n", r2);
	printf("found: %s\n", r3);
	printf("found: %s\n", r4);
	return (0);
}
*/
