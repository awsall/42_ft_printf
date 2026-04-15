/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 12:25:51 by awsall            #+#    #+#             */
/*   Updated: 2026/04/07 17:26:02 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_write_negative(int nbr, int *count)
{
	if (nbr == 0)
	{
		write(1, "0", 1);
		*count = 1;
		return (1);
	}
	else if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count = 11;
		return (1);
	}
	return (0);
}

int	ft_print_int(int nbr)
{
	char	buffer[12];
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (ft_write_negative(nbr, &count))
		return (count);
	if (nbr < 0)
	{
		write(1, "-", 1);
		count++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		buffer[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	while (i > 0)
	{
		write(1, &buffer[--i], 1);
		count++;
	}
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	ft_print_int(12);
	//printf("%d\n", nbr);
	return (0);
}*/
