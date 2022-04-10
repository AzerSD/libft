/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 11:51:44 by azer              #+#    #+#             */
/*   Updated: 2022/04/08 11:51:44 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The atoi() function converts the initial portion of the string
// pointed to by str to int.

int	ft_atoi(const char	*str)
{
	unsigned int	i;
	int				neg;

	i = 0;
	neg = 0;
	while (*str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r'
		|| *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		neg++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + (*str - 48);
		str++;
	}
	if (neg % 2 != 0)
		i = i * -1;
	return (i);
}

// #include <stdio.h>
// void test_atoi()
// {
//     char testcases[12][100] =
//     {
//         "10",
//         "+10",
//         "-10",
//         "a10",
//         "-a10",
//         "     --10",
//         "     +a123",
//         "     -123",
//         " 123",
//         "132a1",
//         "-14a",
//         "---+--+1234ab567"
//     };
//     int i =0;
//     while (i < 12)
//     {
//         printf("Test case N° %d : 
// \n%s => %d\n\n", i, testcases[i], atoi(testcases[i]));
//         i++;
//     }
// }
// int main()
// {
//     test_atoi();
// }				
