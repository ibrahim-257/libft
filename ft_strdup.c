/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialnuman <ibrahim.alnuman@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 18:07:03 by ialnuman          #+#    #+#             */
/*   Updated: 2026/09/18 18:07:03 by ialnuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t  len;
    char *ptr;

    len = ft_strlen(s);
    ptr = (char *)malloc((len + 1) * sizeof(char));
    if(ptr == NULL)
        return (NULL);
     ptr = (char *)ft_memcpy((char *)ptr, s, len);
     return (ptr);
}