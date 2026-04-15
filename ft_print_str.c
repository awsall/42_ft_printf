/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 13:20:26 by awsall            #+#    #+#             */
/*   Updated: 2026/04/06 20:48:03 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int	i;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i])
	{
		if (write(1, &s[i], 1) == -1)
			return (-1);
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	ft_print_str("");
	printf("%s\n", "");
	return (0);
}
*/
