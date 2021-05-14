/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:08:09 by fmota             #+#    #+#             */
/*   Updated: 2021/01/14 20:00:59 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int b;

	a = 0;
	b = size - 1;
	while (a < b)
	{
		ft_swap(&tab[a], &tab[b]);
		a = a + 1;
		b = b - 1;
	}
}
