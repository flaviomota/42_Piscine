/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:15:43 by fmota             #+#    #+#             */
/*   Updated: 2021/01/19 20:28:56 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	len = 0;
	a = 0;
	c = 0;
	while (dest[len] && len < size)
		len++;
	while (src[c])
		c++;
	a = len;
	b = len;
	while ((src[len - a]) && (len + 1 < size))
	{
		dest[len] = src[len - a];
		len++;
	}
	if (a > size)
		dest[len] = '\0';
	b = b + a;
	return (a + c);
}
