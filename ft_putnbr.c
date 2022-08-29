/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:21:40 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/29 11:30:54 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1,"-2147483648",11);
		return ;
	}
	else if (n == 2147483647)
	{
		write(1,"2147483647",10);
	}
	else if (n > 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else if (n < 0)
	{
		write(1, "-", 1);
        ft_putnbr(n *= -1);
	}
	else
		ft_putchar(n + '0');
}
