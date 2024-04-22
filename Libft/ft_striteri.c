/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:36:39 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/04/11 15:16:54 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	test(unsigned int index, char *c)
{
	printf("Index: %u, Character: %c\n", index, *c);
}

int	main(void)
{
	char str[] = "Hello, world!";

	printf("Original string: %s\n", str);

	ft_striteri(str, &test);

	return (0);
}*/