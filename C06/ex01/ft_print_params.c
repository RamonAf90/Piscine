/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:35:38 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/23 14:18:09 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_strlen(char *c)
{
	int	l;

	l = 0;
	while (c[l] != '\0')
		l++;
	return (l);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 0)
	{
		while (i <= argc && argv[i] != (void *)0)
		{
			write(1, argv[i], ft_strlen(argv[i]));
			write(1, "\n", 1);
			i++;
		}		
	}
	return (0);
}
