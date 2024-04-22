/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:27:47 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/04/22 16:11:40 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ptrs1;
	char	*ptrs2;

	i = 0;
	ptrs1 = (char *)s1;
	ptrs2 = (char *)s2;
	if (n == 0)
		return (0);
	while ((ptrs1[i] != '\0' && ptrs2[i] != '\0') && (ptrs1[i] == ptrs2[i])
		&& ((i + 1) < n))
		i++;
	return (ptrs1[i] - ptrs2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char teste[] = "batata";
	char teste2[] = "banana";

	printf("%i\n", ft_memcmp(teste, teste2, 4));
	printf("%i\n", memcmp(teste, teste2, 4));
}*/