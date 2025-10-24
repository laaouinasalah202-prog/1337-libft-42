/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaaouin <slaaouin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-16 10:43:13 by slaaouin          #+#    #+#             */
/*   Updated: 2025/10/22 12:27:07 by slaaouin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdint.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *array;

    if (nmemb == 0 || size == 0)
        return (malloc(0)); // standard behavior

    // optional: check for overflow
    if (nmemb > SIZE_MAX / size)
        return (NULL); // prevents overflow

    array = malloc(nmemb * size);
    if (!array)
        return (NULL);
    ft_bzero(array, nmemb * size);
    return (array);
}
