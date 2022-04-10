/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 04:45:32 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 04:45:32 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strlcat() function appends the NUL-terminated string src to the end of dst. 
// It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
// return the total length of the string they tried to create.

size_t	strlcat(char	*dst, const char	*src, size_t	maxlen) {
    const size_t srclen;
    const size_t dstlen;

	srclen = strlen(src);
	dstlen = strnlen(dst, maxlen);
    if (dstlen == maxlen) 
		return maxlen + srclen;
    if (srclen < maxlen - dstlen) 
        memcpy(dst + dstlen, src, srclen + 1);
	else 
	{
        memcpy(dst + dstlen, src, maxlen - 1);
        dst[dstlen + maxlen - 1] = '\0';
    }
    return dstlen + srclen;
}

//  int main(void)
// {
//     int i;
//     for(i = 0; i < 14; i++)
//     {
//         char dest[50] = "Hello";
//         char src[50] = "World!!";
//         printf("ori %lu %s\n", ft_strlcat(dest, src, i), dest);
//     }
//     for(i = 0; i < 14; i++)
//     {
// 	    char dest[50] = "Hello";
//         char src[50] = "World!!";
//         printf("cus %lu %s\n", strlcat(dest, src, i), dest);
// 	}
// }