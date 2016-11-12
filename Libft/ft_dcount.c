/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getdigits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcosta <kcosta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:24:13 by kcosta            #+#    #+#             */
/*   Updated: 2016/11/06 12:13:56 by kcosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_dcount(int n)
{
	int		digits;

	digits = 0;
	if (!n)
		return (1);
	while (n != 0)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}
