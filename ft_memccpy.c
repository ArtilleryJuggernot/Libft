/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 00:33:55 by hjacquel          #+#    #+#             */
/*   Updated: 2022/11/01 00:57:12 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memccpy(void	*restrict dst, const void	*restrict src, int ch, size_t maxSize)
{
	unsigned char		*tp;
	const unsigned char	*fp;
	unsigned char		uc;

	if (maxSize > 0) 
	{
		tp = dst;
		fp = src;
		uc = ch;
	}
	while (--maxSize != 0)
	{
		if ((*tp++ = *fp++) == uc)
			return (tp);
	}
	return (0);
}
