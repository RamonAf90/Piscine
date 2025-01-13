/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:21:57 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/25 19:59:03 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char *c)
{
	int	l;

	l = 0;
	while (c[l] != '\0')
		l++;
	return (l);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*dup;

	l = ft_strlen(src);
	dup = (char *)malloc((l + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		dup[i] = src[i];
		i++;
	}
	dup[l] = '\0';
	return (dup);
}
/*
int	main()
{
	char	*a = "HahahaGA";
	printf("my string: %s\n", a);
	printf("my stringdup: %s\n", ft_strdup(a));
	return (0);
}*/
