/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-raev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:18:33 by tde-raev          #+#    #+#             */
/*   Updated: 2024/10/09 12:32:59 by tde-raev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void*	ft_calloc(size_t num, size_t size)
{
	// Calculate the total memory size needed
	size_t total_size = num * size;

	// Allocate memory using malloc
	void* ptr = malloc(total_size);

	// Check if the memory allocation was successful
	if (ptr == NULL) {
		return NULL;
	}

	// Initialize the allocated memory to zero manually using a while loop
	size_t i = 0;
	while (i < total_size) {
  		((char*)ptr)[i] = 0;
		i++;
	}

	return ptr;
}
