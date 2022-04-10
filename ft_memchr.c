/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:32:45 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 02:32:45 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// memchr searches for the first occurrence of the character c (unsigned char) 
// in the first n bytes of the string pointed to, by the argument str.

void	*ft_memchr(const void	*s, int c, size_t n)
{
	size_t			i;
	unsigned char	cc;
	unsigned char	*tmp;

	cc = (unsigned char)c;
	tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == cc)
			return ((void *)&((unsigned const char *)s)[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main () {
//    const char str[] = "http://www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;

//    ret = ft_memchr(str, ch, strlen(str));

//    printf("String after |%c| is - |%s|\n", ch, ret);

//    return(0);
// }
