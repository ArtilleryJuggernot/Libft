/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 01:11:48 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/29 12:04:35 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

int	cpt(char const *str, char sep)
{
	int	n;
	int	words;

	words = 0;
	n = 0;
	while (str[n])
	{
		if (check_sep(str[n + 1], sep) == 1
			&& check_sep(str[n], sep) == 0)
			words++;
		n++;
	}
	return (words);
}

void	ft_strcpy(char *dest, char const *from, char sep)
{
	int	i;

	i = 0;
	while (check_sep(from[i], sep) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	tab_write(char **tab, char const *str, char sep)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (check_sep(str[i], sep) == 1)
			i++;
		else
		{
			j = 0;
			while (check_sep(str[i + j], sep) == 0)
				j++;
			tab[word] = (char *) malloc(sizeof(char) * (j + 1));
			ft_strcpy(tab[word], str + i, sep);
			i += j;
			word++;
		}
	}
}

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		n;

	n = cpt(s, c);
	res = (char **) malloc(sizeof(char *) * (n + 1));
	res[n] = 0;
	tab_write(res, s, c);
	return (res);
}
