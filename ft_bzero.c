/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 17:14:22 by ccastro           #+#    #+#             */
/*   Updated: 2024/08/04 07:11:57 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ps;

	ps = (unsigned char *) s;
	while (n--)
		*ps++ = '\0';
}

// int	main(void)
// {
// 	char	s1[20] = "Hello, world!";
// 	char	s2[20] = "Hello, world!";
// 	size_t	n;
// 
// 	n = 1;
// 	ft_bzero(s1, n);
// 	printf("after ft_bzero: %s\n", s1);
// 	bzero(s2, n);
// 	printf("after bzero: %s\n", s2);
// }
