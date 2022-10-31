/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:07:21 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/31 15:57:58 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_striter(char *s, void (*f) (char *))
{
	int	n;

	n = 0;
	while (s[n])
	{
		f(&s[n]);
		n++;
	}
}

void	add_one(char *c)
{
	*c = *c + 1;
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str = malloc(sizeof(char) * 5);
	str = "ABCD";
	ft_striter(str,&add_one);
}
