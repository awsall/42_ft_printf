/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 16:55:19 by awsall            #+#    #+#             */
/*   Updated: 2026/04/04 02:03:20 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa_base(unsigned long n, const char *base)
{
	int		count;

	if (!base)
		return (0);
	if (n == 0)
		return (write(1, "0", 1));
	count = 0;
	if (n >= 16)
		count += ft_printhexa_base(n / 16, base);
	write (1, &base[n % 16], 1);
	return (count + 1);
}
/*
int	main(void)
{
	ft_printhexa_base(565, "0123456789ABCDEF");
	write(1, "\n", 1);
	return (0);
}*/
