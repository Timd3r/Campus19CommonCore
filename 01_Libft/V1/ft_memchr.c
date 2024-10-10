/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-raev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:55:05 by tde-raev          #+#    #+#             */
/*   Updated: 2024/10/09 15:57:44 by tde-raev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *ptr, int value, int num)
{
	unsigned char *p = (unsigned char *)ptr;

	while (*p && num > 0)
	{
		if (*p == value)
			return (p);
		p++;
		num--;
	}
	return (0);
}
