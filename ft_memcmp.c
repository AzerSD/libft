/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:45:16 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 02:45:16 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memcmp() function compares the first n bytes (each
// interpreted as unsigned char) of the memory areas s1 and s2.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;
	size_t			i;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a1[i] != a2[i])
			return (a1[i] - a2[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char s[] = {-128, 0, 127, 0};
// 	char sCpy[] = {-128, 0, 127, 0};
// 	char s2[] = {0, 0, 127, 0};
// 	char s3[] = {0, 0, 42, 0};
// 	printf("my_ft: %d\n", ft_memcmp(s, sCpy, 4));
// 	printf("real_ft: %d\n", memcmp(s, sCpy, 4));
// 	printf("my_ft: %d\n", ft_memcmp(s, s2, 0));
// 	printf("real_ft: %d\n", memcmp(s, s2, 0));
// 	printf("my_ft: %d\n", ft_memcmp(s, s2, 1));
// 	printf("real_ft: %d\n", memcmp(s, s2, 1));
// 	printf("my_ft: %d\n", ft_memcmp(s2, s, 1));
// 	printf("real_ft: %d\n", memcmp(s2, s, 1));
// } 
