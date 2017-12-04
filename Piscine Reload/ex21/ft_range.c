/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osavytsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 15:39:54 by osavytsk          #+#    #+#             */
/*   Updated: 2017/10/26 17:02:18 by osavytsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	i = max - min;
	if (min >= max)
		return (NULL);
	ptr = (int*)malloc(sizeof(int) * (i));
	if (ptr == NULL)
		return (NULL);
	while (min < max)
	{
		*ptr = min;
		min++;
		ptr++;
	}
	return (ptr - i);
}
