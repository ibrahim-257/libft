/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialnuman <ibrahim.alnuman@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 15:56:20 by ialnuman          #+#    #+#             */
/*   Updated: 2026/09/19 15:56:20 by ialnuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t s1_len;
    size_t s2_len;
    char  *ptr;

    if(s1 == NULL || s2 == NULL)
        return (NULL);
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    ptr = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
    if(ptr == NULL)
        return (NULL);
    ft_strlcpy(ptr , s1 , s1_len + 1);
    ft_strlcat(ptr , s2 , s1_len + s2_len + 1);
    return (ptr);
}
