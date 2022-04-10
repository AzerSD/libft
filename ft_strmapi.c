/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:31:09 by azer              #+#    #+#             */
/*   Updated: 2022/04/09 21:31:09 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Applies the function ’f’ to each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) resulting
// from successive applications of ’f’.

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	toupper_even(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 	{
// 		if (c > 96 && c < 123)
// 		c = c - 32;
// 	}
// 	return (c);
// }

// int main(void)
// {
// 	char s[] = 
// "we have the brains of our ancestors but temptations they never had to face";

// 	printf("toupper_even:\nFrom: [ %s ]\nto:   [ %s ]",
// 	s, ft_strmapi(&s[0], toupper_even));
//	free(str);
// 	return (0);
// }
