/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 17:03:23 by awsall            #+#    #+#             */
/*   Updated: 2026/04/07 17:31:52 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex_ptr(unsigned long n)
{
	const char	*hex = "0123456789abcdef";
	int			count;

	count = 0;
	if (n >= 16)
		count += ft_puthex_ptr(n / 16);
	write(1, &hex[n % 16], 1);
	return (count + 1);
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	adr;
	int				count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	adr = (unsigned long)ptr;
	count = 0;
	count += write(1, "0x", 2);
	count += ft_puthex_ptr(adr);
	return (count);
}
/*
int	main(void)
{
	int		x;
	void	*p;

	x = 17;
	p = &x;

	ft_print_ptr(p);
	write(1, "\n", 1);
	return (0);
}*/
