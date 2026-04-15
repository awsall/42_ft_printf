/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:36:07 by awsall            #+#    #+#             */
/*   Updated: 2026/04/06 19:57:07 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}
/*
int	main(void)
{
	ft_print_char('\n');
	ft_print_char('4');
	return (0);
}
*/
