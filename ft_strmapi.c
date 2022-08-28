/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:19:35 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/28 22:28:57 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*copy;
	int		n;
	int		len;
	
	n = 0;
	len = ft_strlen(s);
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while(n <= len)
	{
		copy[n] = f(n,s[n]);
		n++;
	}
	return (copy);
}
