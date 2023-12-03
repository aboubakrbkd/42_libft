/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:59:38 by aboukdid          #+#    #+#             */
/*   Updated: 2023/11/09 03:53:51 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	while (dst[i])
		i++;
	dst_len = i;
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	if (dst_len + src_len < dstsize)
		ft_memcpy(&dst[i], src, src_len + 1);
	else
	{
		ft_memcpy(&dst[i], src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (src_len + dst_len);
}
