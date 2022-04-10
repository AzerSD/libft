/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 03:27:34 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 03:27:34 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strchr() function returns a pointer to the first occurrence
// of the character c in the string s.

char	*ft_strchr(const char	*s, int c)
{
	char	find;
	int		i;

	find = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == find)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == find)
		return ((char *)s + i);
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
//     char s[] = "azersioud";
// 	printf("my_ft: %s\n", ft_strchr(s, 'a'));
// 	printf("my_ft: %s\n", ft_strchr(s, 'o'));
// 	printf("my_ft: %s\n", ft_strchr(s, 'z'));
// 	printf("my_ft: %s\n", ft_strchr(s, 0));
// 	printf("my_ft: %s\n", ft_strchr(s, 'a' + 256));

//     printf("\nreal_ft: %s\n", strchr(s, 'a'));
// 	printf("real_ft: %s\n", strchr(s, 'o'));
// 	printf("real_ft: %s\n", strchr(s, 'z'));
// 	printf("real_ft: %s\n", strchr(s, 0));
// 	printf("real_ft: %s\n", strchr(s, 'a' + 256));
//     return (0);
// }
