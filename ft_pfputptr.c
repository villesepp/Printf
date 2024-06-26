/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vseppane <vseppane@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:26:45 by vseppane          #+#    #+#             */
/*   Updated: 2024/05/14 12:21:01 by vseppane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_pfpint_to_hex(uintptr_t n, size_t *count)
{
	char	buffer[50];
	int		i;
	int		error;

	error = 0;
	i = 0;
	while (n)
	{
		buffer[i] = "0123456789abcdef"[n % 16];
		i++;
		n = n / 16;
	}
	buffer[i] = 'x';
	buffer[++i] = '0';
	while (i >= 0 && error != -1)
	{
		error = ft_pfputchar(buffer[i], count);
		i--;
	}
	return (error);
}

int	ft_pfputptr(void *ptr, size_t *count)
{
	uintptr_t	pint;
	int			error;

	error = 0;
	if (!ptr)
	{
		error = ft_pfputstr("0x0", count);
		return (error);
	}
	pint = (uintptr_t)ptr;
	error = ft_pfpint_to_hex(pint, count);
	return (error);
}
