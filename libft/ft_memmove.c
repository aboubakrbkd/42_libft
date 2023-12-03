/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 00:07:08 by aboukdid          #+#    #+#             */
/*   Updated: 2023/11/08 19:37:21 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p_src;
	char	*p_dest;
	size_t	i;

	p_src = (char *)src;
	p_dest = (char *)dst;
	i = 0;
	if (p_dest > p_src)
	{
		while (len > 0)
		{
			p_dest[len - 1] = p_src[len - 1];
			len--;
		}
	}
	else if (p_dest < p_src)
	{
		while (i < len)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	return (p_dest);
}
