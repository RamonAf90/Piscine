/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:39:53 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/23 13:14:03 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	main(int argc, char **argv)
{
	int	l;

	l = 0;
	while (argv[0][l] != '\0')
		l++;
	if (argc > 0)
		write(1, argv[0], l);
	write(1, "\n", 1);
	return (0);
}
