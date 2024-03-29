/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcodi <fcodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 13:22:19 by fcodi             #+#    #+#             */
/*   Updated: 2019/06/06 18:58:03 by fcodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*result;

	if ((result = ft_strnew(len)))
		if (s)
			result = ft_strncpy(result, (char *)s + start, len);
	return (result);
}
