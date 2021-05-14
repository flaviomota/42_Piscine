/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 10:23:30 by fmota             #+#    #+#             */
/*   Updated: 2021/01/18 10:53:12 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_lowercase(char *str)
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
		if (!(b >= 'a' && b <= 'z'))
		{
			a = false;
			break ;
		}
		index++;
	}
	return (a);
}
