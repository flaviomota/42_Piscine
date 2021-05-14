/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:07:58 by fmota             #+#    #+#             */
/*   Updated: 2021/01/19 17:25:12 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] <= 'Z' && str[index] >= 'A')
			str[index] += 32;
		if (str[index] <= 'z' && str[index] >= 'a')
		{
			if (!(str[index - 1] <= 'z' && str[index - 1] >= 'a'))
				if (!(str[index - 1] <= '9' && str[index - 1] >= '0'))
					if (!(str[index - 1] <= 'Z' && str[index - 1] >= 'A'))
						str[index] -= 32;
		}
		index++;
	}
	return (str);
}
