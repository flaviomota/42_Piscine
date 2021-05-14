/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 09:57:16 by fmota             #+#    #+#             */
/*   Updated: 2021/01/18 10:19:44 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_numeric(char *str)
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
		if (!(b >= '0' && b <= '9'))
		{
			a = false;
			break ;
		}
		index++;
	}
	return (a);
}
