/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 12:25:51 by awsall            #+#    #+#             */
/*   Updated: 2026/03/23 15:00:48 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
void	ft_printnbr(int nbr)
{	
	char	buffer;
	int		i;

	i = 0;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return ;

	}
	if (nbr == -21474836)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		buffer[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(1, &buffer[i], 1);
	}
}

#include <stdio.h>
/*
int	main(void)
{
	int	nbr;
	int	función;

	nbr = 'c';
	función = ft_printnbr(nbr);
	printf("%d\n", función);
	return (0);
}
*/
int	main(void)
{
	int	n;
	int	f;

	n = 10;
	f = ft_printf(f);
	printf("%d\n", ft_printf(f));

}
 

