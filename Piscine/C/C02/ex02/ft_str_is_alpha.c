/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 09:32:44 by fmota             #+#    #+#             */
/*   Updated: 2021/01/18 12:23:02 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_alpha(char *str)
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
		if (!((b >= 'A' && b <= 'Z') || (b >= 'a' && b <= 'z')))
		{
			a = false;
			break ;
		}
		index++;
	}
	return (a);
}
