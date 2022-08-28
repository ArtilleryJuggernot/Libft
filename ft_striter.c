/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:07:21 by hjacquel          #+#    #+#             */
/*   Updated: 2022/08/28 22:29:44 by hjacquel         ###   ########.fr       */
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