/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <dmathe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:30:14 by dmathe            #+#    #+#             */
/*   Updated: 2015/02/19 19:00:35 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	c;
	char	sc;
	size_t	len;
	int		go;

	go = 0;
	if ((c = *s2++) != '\0')
	{
		len = ft_strlen(s2);
		while (!go || ft_strncmp(s1, s2, len) != 0)
		{
			go = 1;
			if ((sc = *s1++) == '\0' || n-- < 1)
				return (NULL);
			while (sc != c)
			{
				if ((sc = *s1++) == '\0' || n-- < 1)
					return (NULL);
			}
			if (len > n)
				return (NULL);
		}
		s1--;
	}
	return ((char *)s1);
}
