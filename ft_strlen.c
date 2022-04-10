/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:04:55 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 22:04:55 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strlen() function calculates the length of the string pointed
// to by s, excluding the terminating null byte ('\0').

size_t	ft_strlen(char const	*s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_strlen("abc"));
// }