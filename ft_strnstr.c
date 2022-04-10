/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:50:25 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 22:50:25 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strnstr() function locates the first occurrence of the null-termi-
// nated string s2 in the string s1, where not more than n characters are 
// searched.

char	*ft_strnstr(const char	*big, const char	*little, size_t	len)
{
	size_t	i;
	size_t	j;

	if ((!*big && !*little) || !*little)
		return ((char *)big);
	if (!*big)
		return (0);
	j = 0;
	while (j < len && len != 0 && *big)
	{
		if (*big == *little)
		{
			i = 1;
			while (little[i] == big[i] && little[i] && j + i < len)
				i++;
			if (!little[i])
				return ((char *)big);
		}
		big++;
		j++;
	}
	return (NULL);
}

// int main()
// {
//     const char *largestring = "Foo Bar Baz";
//     const char *smallstring = "Bar";
//     char *ptr;

//     ptr = ft_strnstr(largestring, smallstring, 8);
//     printf("%s", ptr);
// 	return (0);
// }