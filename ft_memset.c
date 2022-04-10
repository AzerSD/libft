/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 03:03:11 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 03:03:11 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memset() function fills the first n bytes of the memory area
// pointed to by s with the constant byte c.
// The memset() function returns a pointer to the memory area s. 

void	*ft_memset(void	*s, int c, size_t	n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr++ = c;
		n--;
	}
	return (s);
}

// int main()
// {
//     int c = 1;
//     int n = 3;
//     void *array;

//     char *v = "ABC";
//     array = &v;

//     write(1, v, 3);
//     write(1, "\n", 1);

//     ft_memset(array, c, n);

//     write(1, array, 3);
//     write(1, "\n", 1);
// }