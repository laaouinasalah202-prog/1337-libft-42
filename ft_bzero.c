/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaaouin <slaaouin@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-15 13:24:14 by slaaouin          #+#    #+#             */
/*   Updated: 2025/10/15 14:52:42 by slaaouin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*l;
	if(!s)
		return ;
	l = (unsigned char *)s;
	while (n--)
	{
		*l = 0;
		l++;
	}
}

// int main()
// {
//     char str[] = "shegy";
//     ft_bzero(str, 3);
//     for(int i = 0 ; i < 6 ; i++)
//         printf("%03X\n", (unsigned char)str[i]);

// }
