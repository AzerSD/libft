/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 04:29:07 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 04:29:07 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strdup - duplicate a string

char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*result;

	slen = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (slen + 1));
	if (!result)
		return (0);
	slen = 0;
	while (s[slen])
	{
		result[slen] = s[slen];
		slen++;
	}
	result[slen] = '\0';
	return (result);
}

// int main()
// {
//     char source[] = "GeeksForGeeks";
//     char* target = ft_strdup(source);

//     printf("%s", target);
//     return 0;
// }