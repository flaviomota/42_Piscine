/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:20:35 by fmota             #+#    #+#             */
/*   Updated: 2021/01/19 19:16:26 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	convert_hexa(unsigned char c)
{
	put_char(92);
	put_char("0123456789abcdef"[c / 16]);
	put_char("0123456789abcdef"[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!((*str) >= 32 && (*str) <= 126))
		{
			convert_hexa(*str);
		}
		else
		{
			write(1, str, 1);
		}
		++str;
	}
}
