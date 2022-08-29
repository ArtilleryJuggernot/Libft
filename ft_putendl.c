/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:18:13 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/29 11:18:45 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putendl(char const *s)
{
        int     n;

        n = 0;
        while (s[n])
        {
                ft_putchar(s[n]);
                n++;
        }
		ft_putchar('\n');
}
