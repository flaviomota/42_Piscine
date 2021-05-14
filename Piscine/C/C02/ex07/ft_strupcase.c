/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:36:17 by fmota             #+#    #+#             */
/*   Updated: 2021/01/18 11:51:47 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strupcase(char *str)
{
	int		index;
	char	a;

	index = 0;
	while (true)
	{
		a = str[index];
		if (a == '\0')
		{
			break ;
		}
		if (a >= 'a' && a <= 'z')
		{
			str[index] = a - 32;
		}
		index++;
	}
	return (str);
}
