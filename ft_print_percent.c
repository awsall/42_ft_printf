/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 17:16:55 by awsall            #+#    #+#             */
/*   Updated: 2026/04/07 17:28:32 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_percent(void)
{
	return (write(1, "%", 1));
}
/*
#include <stdio.h>
int	main(void)
{
	int	n;

	n = ft_print_percent();
	printf("%d\n", n);
	return (0);
}*/
