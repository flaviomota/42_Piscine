/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:52:33 by fmota             #+#    #+#             */
/*   Updated: 2021/01/18 12:05:16 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strlowcase(char *str)
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
		if (a >= 'A' && a <= 'Z')
		{
			str[index] = a + 32;
		}
		index++;
	}
	return (str);
}
