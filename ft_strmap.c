/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:31:18 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/28 22:41:45 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_strlen(char const *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}



char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*copy;
	int		n;
	int		len;

	len = ft_strlen(s);
	n = 0;
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while (n <= len)
	{
		copy[n] = f(s[n]);
		n++;
	}
	return (copy);
}
