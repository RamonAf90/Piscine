/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramanifa <ramanifa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:20:16 by ramanifa          #+#    #+#             */
/*   Updated: 2024/09/18 15:08:19 by ramanifa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_l;
	unsigned int	src_l;

	j = 0;
	dest_l = 0;
	src_l = 0;
	while (dest[dest_l] != '\0')
		dest_l++;
	while (src[src_l] != '\0')
		src_l++;
	if (size <= dest_l)
		return (size + src_l);
	i = dest_l;
	while (src[j] != '\0' && i < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i++] = '\0';
	return (dest_l + src_l);
}
/*
int	main(void)
{
	char	dest[] = "fbdff";
	char	src[] = "123456789";
	unsigned int	r;
	r = ft_strlcat(dest, src, 15);

	printf("dest: %s\n", dest);
	printf("Total l: %u\n", r);
	return (0);
}
*/
