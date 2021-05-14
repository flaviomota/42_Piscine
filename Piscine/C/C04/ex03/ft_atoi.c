/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:28:48 by fmota             #+#    #+#             */
/*   Updated: 2021/01/19 16:48:43 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	nbr;
	int	sym;

	index = 0;
	nbr = 0;
	sym = 1;
	while ((str[index] == '\n') || (str[index] == '\t') || (str[index] == '\v')
		|| (str[index] == ' ') || (str[index] == '\f') || (str[index] == '\r'))
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index++] == '-')
			sym *= -1;
	}
	while (str[index] && (str[index] >= '0') && (str[index] <= '9'))
	{
		nbr *= 10;
		nbr += (int)str[index] - '0';
		index++;
	}
	return (nbr * sym);
}
