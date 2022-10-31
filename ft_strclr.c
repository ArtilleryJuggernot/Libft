/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:04:21 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/31 00:29:25 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	int	n;

	n = 0;
	while (s[n])
	{
		s[n] = '\0';
		n++;
	}
}
#include <stdio.h>
int	main(void)
{
	char	*a = "Test.";
	printf("%s",a);
	printf("\n");
	ft_strclr(a);
	if (a[4] == '\0')
		printf("%i",1);
}
