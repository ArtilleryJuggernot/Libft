/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 01:00:51 by hjacquel          #+#    #+#             */
/*   Updated: 2022/11/01 01:19:32 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*memchr(const void	*memoryBlock, int searchedChar, size_t size )
{
	const char	*iterator;

	iterator = (const char *) memoryBlock;
	while (size--)
	{
		if (*iterator == searchedChar)
			return ((void *)iterator);
		iterator++;
	}
	return (NULL);
}
