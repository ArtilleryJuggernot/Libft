/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 00:43:55 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/29 11:51:48 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char const *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		n;
	int		i;
	char	*copy;

	copy = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!copy)
		return (NULL);
	n = 0;
	i = 0;
	while (s1[i])
	{
		copy[n] = s1[i];
		n++;
	}
	i = 0;
	while (s2[i])
	{
		copy[n] = s2[i];
		n++;
	}
	return (copy);
}
