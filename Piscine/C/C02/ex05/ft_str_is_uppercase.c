/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 10:54:36 by fmota             #+#    #+#             */
/*   Updated: 2021/01/18 11:10:16 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_uppercase(char *str)
{
	int		index;
	bool	a;
	char	b;

	index = 0;
	a = true;
	while (true)
	{
		b = str[index];
		if (b == '\0')
		{
			break ;
		}
		if (!(b >= 'A' && b <= 'Z'))
		{
			a = false;
			break ;
		}
		index++;
	}
	return (a);
}
