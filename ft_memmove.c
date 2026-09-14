/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialnuman <ibrahim.alnuman@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 17:24:03 by ialnuman          #+#    #+#             */
/*   Updated: 2026/09/13 17:24:03 by ialnuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char	*dest;
    const unsigned char	*source;

    if (dst == NULL && src == NULL)
        return (NULL);

    dest = (unsigned char *)dst;
    source = (const unsigned char *)src;

    if (dest < source)
    {
        while (len--)
            *dest++ = *source++;
    }
    else
    {
        dest += len;
        source += len;
        while (len--)
            *(--dest) = *(--source);
    }
    return (dst);
}