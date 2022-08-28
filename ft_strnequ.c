/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 23:33:41 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/28 23:35:24 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strlen(char const *str)
{
        int     n;

        n = 0;
        while (str[n])
        {
                n++;
        }
        return (n);
}

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
        size_t	i;

        i = 0;
        while (s1[i] == s2[i] && i <= n)
                i++;
		if (i == n)
			return (1);
		return (0);
}
