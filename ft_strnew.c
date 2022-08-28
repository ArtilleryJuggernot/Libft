/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 21:52:29 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/28 22:02:00 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*ptr;
	int		n;

	n = 0;
	ptr = malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);
	while (n < size)
	{
		ptr[n] = '\0';
		n++;
	}
	return (ptr);
}
