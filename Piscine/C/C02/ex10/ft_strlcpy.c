/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:19:46 by fmota             #+#    #+#             */
/*   Updated: 2021/01/19 19:09:00 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	count;

	index = 0;
	count = 0;
	while (src[index] != '\0')
	{
		count++;
		index++;
	}
	if (size == 0)
	{
		return (count);
	}
	index = 0;
	while ((index < size - 1) && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (count);
}
