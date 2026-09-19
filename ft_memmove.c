/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialnuman <ibrahim.alnuman@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 17:24:03 by ialnuman          #+#    #+#             */
/*   Updated: 2026/09/19 14:33:13 by ialnuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
	{
		return (ft_memcpy(dst, src, len));
	}
	else
	{
		i = len;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dst);
}
