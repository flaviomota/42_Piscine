/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 16:50:25 by fmota             #+#    #+#             */
/*   Updated: 2021/01/19 21:56:23 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_base(char *base, int *base2)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*base2 = 1;
	while (base[a] && *base2 == 0)
	{
		b = a;
		while (base[b] != '\0')
		{
			b++;
			if (base[a] == base[b])
				*base2 = 1;
		}
		if (base[a] == '+' || base[a] == '-' || base[a] == '%'
				|| base[a] == '/' || base[a] == '*' || base[a] = '='
				|| base[a] == ',' || base[a] == '.' || base[a] <= 33
				|| base[a] > 126)
			*base2 = 1;
		else
			a++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base;
	int		base2;
	int		nb;

	base = 0;
	base2 = 0;
	ft_base(base, &base2);
	nb = nbr;
	if (base2 == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		while (base[base])
			base++;
		if (nb < base)
			ft_putchar(base[nb]);
		if (nb >= base)
		{
			ft_putchar_base(nb / base, base);
			ft_putchar_base(nb % base, base);
		}
	}
}
