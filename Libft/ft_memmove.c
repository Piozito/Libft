/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:37:25 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/04/22 16:22:22 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptrsrc;
	char	*ptrdest;
	char	temp[n];
	size_t	i;

	ptrsrc = (char *)src;
	ptrdest = (char *)dest;
	i = 0;
	while (i < n)
	{
		temp[i] = ptrsrc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		ptrdest[i] = temp[i];
		i++;
	}
	ptrdest = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char teste1[] = "banana";
	char teste2[] = "batata";

	printf("%s\n", ft_memmove(teste1, teste2, 3));
	printf("%s\n", memmove(teste1, teste2, 3));
}*/