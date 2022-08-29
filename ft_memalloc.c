/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:22:08 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/29 12:28:32 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	int		*ptr;
	size_t	n;

	n = 0;
	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	while (n < size)
	{
		ptr[n] = 0;
		n++;
	}
	return ((void *)ptr);
}
