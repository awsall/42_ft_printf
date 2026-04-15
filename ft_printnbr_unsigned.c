/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_unsigned.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 18:11:44 by awsall            #+#    #+#             */
/*   Updated: 2026/04/03 18:33:22 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr_unsigned(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 10)
		count += ft_printnbr_unsigned(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (count +1);
}
/*
int	main(void)
{
	ft_printnbr_unsigned(1101101);
	write(1, "\n", 1);
	return (0);
}*/
