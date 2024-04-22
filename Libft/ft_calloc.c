/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:27:11 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/04/22 16:36:03 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		((int *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char *teste = calloc(5, 1);
	ft_strlcpy(teste, "bora", 5);

	printf("%s\n", teste);
	free(teste);
}*/