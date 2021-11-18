/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:47:07 by osallak           #+#    #+#             */
/*   Updated: 2021/11/11 14:33:34 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"libft.h"
#include<stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	*p_src;
	int	*p_dest;

	p_src = (int *)src;
	p_dest = (int *)dest;
	if (p_dest > p_src)
	{
		len--;
		while ((int)len >= 0)
		{
			*((char *)(dest + len)) = *((char *)(src + len));
			len--;
		}
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
