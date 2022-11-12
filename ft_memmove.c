/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjacquel <hjacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:31:56 by hjacquel          #+#    #+#             */
/*   Updated: 2022/11/12 22:51:14 by hjacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memmove(void *dst , const void *src, int size)
{
	char	*s = (char *) src;
	char	*d = (char *) dst;
	int i = 0;

	if (d > s)
		while (size-- > 0)
			d[size] = s[size];
	else
		while (i++ < size)
			d[i] = s[i];
	return (dst);
}
