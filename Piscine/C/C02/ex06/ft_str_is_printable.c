/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:11:24 by fmota             #+#    #+#             */
/*   Updated: 2021/01/18 11:35:26 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_printable(char *str)
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
		if (!(b >= ' ') || b == 127)
		{
			a = false;
			break ;
		}
		index++;
	}
	return (a);
}
