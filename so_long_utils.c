/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akihito <akihito@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:00:39 by akihito           #+#    #+#             */
/*   Updated: 2021/11/27 14:00:53 by akihito          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	int		ans;

	i = 0;
	ans = 0;
	while (*s1 != 0 || *s2 != 0)
	{
		ans = (unsigned char)*(s1) - (unsigned char)*(s2);
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
			return (ans);
		i++;
		s1 += 1;
		s2 += 1;
	}
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (1)
	{
		if (*s == (char)c)
			p = (char *)s;
		if (*s == '\0')
			break ;
		s++;
	}
	return (p);
}
