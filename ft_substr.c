/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:05:42 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 23:05:42 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns the substring of the given string at the given start position 
// with the given length (or smaller if the length of the
// original string is less than start + length,
// or length is bigger than MAXSTRINGLEN).

char	*ft_substr(char const	*s, unsigned int start, size_t	len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

// int main()
// {
// 	printf("%s\n", ft_substr("Hello, 42World!", 7, 2));
// 	return 0;
// }