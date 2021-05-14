/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:14:47 by fmota             #+#    #+#             */
/*   Updated: 2021/01/19 19:56:59 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	a;
	int	b;

	index = 0;
	while (to_find[index])
	{
		index++;
	}
	if (index == 0)
		return (str);
	a = 0;
	b = 0;
	while (str[a])
	{
		while (to_find[b] == str[a + b])
		{
			if (b + 1 == index)
				return (str + a);
			b++;
		}
		b = 0;
		a++;
	}
	return (0);
}
