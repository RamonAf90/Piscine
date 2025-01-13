/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:53:07 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/23 16:09:38 by ramanifa         ###   ########.fr       */
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
	if (argc > 0)
	{
		argc--;
		while (argc >= 1)
		{
			write(1, argv[argc], ft_strlen(argv[argc]));
			write(1, "\n", 1);
			argc--;
		}
	}
	return (0);
}
