/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:04:26 by azer              #+#    #+#             */
/*   Updated: 2022/04/08 21:04:26 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int ch)
{
	if ((ch > 47) && (ch < 58))
		return (1);
	else
		return (0);
}	
