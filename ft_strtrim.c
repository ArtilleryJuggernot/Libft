/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 01:00:30 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/29 01:11:05 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_whitespace(char c)
{
	if(c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}


int	ft_strlen_blank(char const *str)
{
	int	n;
	int	my_r;
	
	n = 0;
	my_r = 0;
	while (str[n])
		if (!(is_whitespace(str[n])))
			my_r++;
		n++;
	return (my_r);
}

char	*ft_strim(char const *s)
{
	char	*copy;
	int		n;
	int		index;
	
	copy = malloc(sizeof(char) * (ft_strlen_blank(s) + 1));
	n = 0;
	index = 0;
	while (s[n])
	{
		if (!(is_whitespace(s[n])))
		{
			copy[index] = s[n];
			index++;
		}
		n++;
	}
}
