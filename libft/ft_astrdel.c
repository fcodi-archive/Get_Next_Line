/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_astrdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcodi <fcodi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 18:20:02 by fcodi             #+#    #+#             */
/*   Updated: 2019/06/06 18:58:03 by fcodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void			ft_astrdel(char **astr, size_t nstr)
{
	while (nstr > 0)
		ft_strdel(&astr[nstr--]);
	ft_strdel(astr);
}
