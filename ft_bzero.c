/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:55:29 by azer              #+#    #+#             */
/*   Updated: 2022/04/08 20:55:29 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The bzero() function sets the first n bytes of the area 
// starting at s to zero (bytes containing aq\0aq).

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr++ = 0;
		n--;
	}
}

// int main()
// {
//     int n = 3;
//     void *array;

//     char *v = "ABC";
//     array = &v;

//     write(1, v, 3);
//     write(1, "\n", 1);

//     ft_bzero(array, n);

//     write(1, array, 3);
//     write(1, "\n", 1);
// }