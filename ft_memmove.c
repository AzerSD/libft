/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:56:35 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 02:56:35 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memmove() function copies n bytes from memory 
// area src to memory area dest.
// The memory areas may overlap: copying takes place
// as though the bytes in src are first copied into a 
// temporary array that does not overlap src or dest,
// and the bytes are then copied from the temporary array to dest.

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	void	*tmp;

	if (!dest && !src)
		return (NULL);
	tmp = malloc(sizeof(src) * n);
	if (!tmp)
		return (NULL);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}

// #include <stdio.h>
// int main()
// {
//     char src[] = "abcdef";
//     char *dest = src+3;
//     int n = 5;
//     printf("dest: %s\n", dest);
//     ft_memmove(dest, src, n);
//     printf("srce :%s\n", dest);
// }