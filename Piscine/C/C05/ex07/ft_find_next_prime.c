/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 17:06:20 by fmota             #+#    #+#             */
/*   Updated: 2021/01/21 11:28:08 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int prime;

	prime = 2;
	if (nb <= 1)
		return (0);
	while (prime <= nb / prime)
	{
		if (nb % prime == 0)
			return (0);
		prime++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int a;
	int b;

	a = 2;
	b = nb;
	if (nb <= 1)
		return (2);
	while (ft_is_prime(b) == 0)
		b++;
	return (b);
}
