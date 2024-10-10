/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-raev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:28:40 by tde-raev          #+#    #+#             */
/*   Updated: 2024/10/09 13:58:49 by tde-raev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s) 
{
	// Find the length of the string
	size_t len = 0;
	while (s[len] != '\0') {
		len++;
	}

	// Allocate memory for the duplicate string
	char *dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL) {
		return NULL; // Memory allocation failed
	}

	// Copy the string
	size_t i = 0;
	while (i <= len) {
		dup[i] = s[i];
		i++;
	}

	return dup;
}
