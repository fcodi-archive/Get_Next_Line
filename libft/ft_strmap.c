/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcodi <fcodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 20:23:02 by fcodi             #+#    #+#             */
/*   Updated: 2019/06/06 18:58:03 by fcodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*string;
	size_t	i;

	if (s && f)
	{
		if ((string = ft_strnew(ft_strlen(s))))
		{
			i = 0;
			while (s[i])
			{
				string[i] = f((char)s[i]);
				++i;
			}
		}
	}
	else
		return (NULL);
	return (string);
}
