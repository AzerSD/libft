/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:54:33 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 02:54:33 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  The memcpy() function copies n bytes from memory area src to
//  memory area dest.  The memory areas must not overlap. 

void	*ft_memcpy(void	*dest, const void	*src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int main()
// {   
//     char src[5] = "kk";
//     char dest[5] = "abcd";
//     ft_memcpy(dest, src, 2);
//     printf("src: %s\n", src);
//     printf("dest: %s", dest);
// }