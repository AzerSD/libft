/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 12:33:22 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 12:33:22 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char   *src, size_t    n)
{
	size_t    i;
    size_t    src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (n < 1)
		return (src_len);
	while (src[i] && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

size_t
strlcpy(char * __restrict dst, const char * __restrict src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;
	/* Copy as many bytes as will fit */
	if (n != 0) {
		while (--n != 0) {
			if ((*d++ = *s++) == '\0')
				break;
		}
	}
	/* Not enough room in dst, add NUL and traverse rest of src */
	if (n == 0) {
		if (siz != 0)
			*d = '\0';		/* NUL-terminate dst */
		while (*s++)
			;
	}
	return(s - src - 1);	/* count does not include NUL */
}

// int main(void)
// {
// 	char src[] = "coucou";
// 	char dest[10]; 

// 	ft_memset(dest, 'A', 10);
// 	if (ft_strlcpy(dest, src, 0) == ft_strlen(src) 
// 		&& dest[0] == 'A')
// 		printf("Ok!\n");
// 	else
// 		printf("Error");

// 	if (ft_strlcpy(dest, src, 1) == ft_strlen(src) 
// 		&& dest[0] == 0 && dest[1] == 'A')
// 		printf("Ok!\n");
// 	else
// 		printf("Error");

// 	if (ft_strlcpy(dest, src, 2) == ft_strlen(src) 
// 		&& dest[0] == 'c' && dest[1] == 0  && dest[2] == 'A')
// 		printf("Ok!\n");
// 	else
// 		printf("Error");

// 	if (ft_strlcpy(dest, src, -1) == ft_strlen(src) 
// 		&& !strcmp(src, dest) && dest[ft_strlen(src) + 1] == 'A')
// 		printf("Ok!\n");
// 	else
// 		printf("Error");

// 	ft_memset(dest, 'A', 10);
// 	if (ft_strlcpy(dest, src, 6) == strlen(src) 
// 		&& !ft_memcmp(src, dest, 5) && dest[5] == 0)
// 		printf("Ok!\n");
// 	else
// 		printf("Error");

// 	ft_memset(dest, 'A', 10);
// 	if (ft_strlcpy(dest, src, 7) == strlen(src) 
// 		&& !ft_memcmp(src, dest, 7))
// 		printf("Ok!\n");
// 	else
// 		printf("Error");

// 	ft_memset(dest, 'A', 10);
// 	if (ft_strlcpy(dest, src, 8) == strlen(src) 
// 		&& !ft_memcmp(src, dest, 7))
// 		printf("Ok!\n");
// 	else
// 		printf("Error");

// 	ft_memset(dest, 'A', 10);
// 	if (ft_strlcpy(dest, "", 42) == 0 
// && !ft_memcmp("", dest, 1))
// 		printf("Ok!\n");
// 	else
// 		printf("Error");

// 	ft_memset(dest, 0, 10);
// 	if (ft_strlcpy(dest, "1", 0) == 1 && dest[0] == 0)
// 		printf("Ok!\n");
// 	else
// 		printf("Error");
// 	return (0);
// }