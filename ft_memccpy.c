/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:22:24 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 02:22:24 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memccpy() function copies no more than n bytes from src to dest,
// stopping when the character c is found.
//
// The memccpy() function returns a pointer to the next character in
// dest after c, or NULL if c was not found in the first n
// characters of src.

void	*ft_memccpy(void	*dest, const void	*src, int c, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	while (n != 0)
	{
		*dest2 = *src2;
		if (*src2 == (unsigned char)c)
			return (dest2 + 1);
		dest2++;
		src2++;
		n--;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
//     char dest[] = "123456";
//     char src[] = "abcedfghij";
//     char c = 'd';
//     char n = 6;
// 	printf("returned value: ");
//     write(1, ft_memccpy(dest, src, c, n), 1);
//     printf("\nsrc: %s\n", src);
//     printf("dest: %s\n", dest);
// }