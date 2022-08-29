/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 23:29:39 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/29 11:55:25 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strequ(char const *s1, char const *s2)
{
	int	n;

	n = 0;
	while (s1[n] == s2[n])
		n++;
	if (n == ft_strlen(s1))
		return (1);
	return (0);
}
