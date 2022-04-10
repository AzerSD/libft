/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:40:29 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 22:40:29 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strcmp() function compares the two strings s1 and s2.
// It returns an integer less than, equal to, or greater than zero if s1 is 
// found// respectively, to be less than, to match, or be greater than s2.

int	ft_strncmp(char const	*s1, char const	*s2, size_t	n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && --n && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// #include <stdio.h>
// int main(void)
// {
//     char s[] = "abcd";
//     char ss[] = "abcd";
//     int n = 4;
//     printf("%d", ft_strncmp(s, ss, n));
// }
