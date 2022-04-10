/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:05:34 by azer              #+#    #+#             */
/*   Updated: 2022/04/08 21:05:34 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_helper(char	*ptr, int n)
{
	if (n > 9)
	ptr = ft_itoa_helper(ptr, n / 10);
	*ptr = '0' + n % 10;
	return (ptr + 1);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	char	*s;

	ptr = (char *)malloc(12);
	s = ptr;
	if (!ptr)
		return (0);
	if (n < 0)
	{
		*ptr++ = '-';
		n = -n;
	}
	*ft_itoa_helper(ptr, n) = '\0';
	return (ptr);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_itoa(0000));
// }