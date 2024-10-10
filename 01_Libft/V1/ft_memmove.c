/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-raev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:21:33 by tde-raev          #+#    #+#             */
/*   Updated: 2024/10/09 16:11:39 by tde-raev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(char *dest, char *src, int n)
{
	char	*temp;
	int		i;

	i = 0;
	temp = 0;
	while (i < n && *src)
	{
		temp[i] = *src;
		i++;
		temp++;
		src++;
	}
	temp[i] = '\0';
	i = 0;
	while (n < 0 && *dest)
	{
		*dest = temp[i];
		n--;
		dest++;
		i++;
	}
	return (dest);
}
