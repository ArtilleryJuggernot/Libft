/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:52:49 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/29 12:24:15 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	swap(char *x, char *y)
{
	char	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

char	*reverse(char *str, int i, int j)
{
	while (i < j)
		swap(&str[i++], &str[j--]);
	return (str);
}

int	buff_len(int n)
{
	if (n < 10)
		return (1);
	else
		return (buff_len(n / 10) + 1);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	int		num;
	char	*str;
	int		i;
	int		r;

	i = 0;
	num = ft_abs(n);
	str = malloc(sizeof(char) * (buff_len(n) + 1));
	if (!str)
		return (NULL);
	while (num)
	{
		r = num % 10;
		if (r >= 10)
			str[i++] = 65 + (r - 10);
		else
			str[i++] = 48 + r;
		num = num / 10;
	}
	if (i == 0)
		str[i++] = '0';
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';
	return (reverse(str, 0, i - 1));
}
