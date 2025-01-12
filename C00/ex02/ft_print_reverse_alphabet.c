/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:24:04 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/09 14:09:19 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;
	char	z;

	a = 'z';
	z = 'a';
	while (a >= z)
	{
		write(1, &a, 1);
		a = a - 1;
	}
}
