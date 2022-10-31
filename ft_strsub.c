/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 23:39:41 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/31 16:20:38 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*troncon;
	unsigned int	end;
	int				n;

	end = start + len;
	troncon = malloc(sizeof(char) * len);
	n = 0;
	if (!troncon)
		return (NULL);
	while (s[start] && start < end)
	{
		troncon[n] = s[start];
		start++;
		n++;
	}
	return (troncon);
}
#include <stdio.h>
int	main(void)
{
	char	*a = malloc(sizeof(char) * 5);
	a = "ACDCEFG";
	char	*b = ft_strsub(a,2,3);
	printf("%s",b);
}

