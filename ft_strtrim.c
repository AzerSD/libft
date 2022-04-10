/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:57:46 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 22:57:46 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns a copy of
// ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t	front;
	size_t	rear;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		rear = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[rear - 1] && ft_strchr(set, s1[rear - 1]) && rear > front)
			rear--;
		str = (char *)malloc(sizeof(char) * (rear - front + 1));
		if (!str)
			return (NULL);
		else
			ft_strlcpy(str, &s1[front], rear - front + 1);
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s\n", ft_strtrim("abqbc", "abc"));
//     printf("%s\n", ft_strtrim("   u r doing wel  l ", " "));
// 	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
// 	return 0;
// }
