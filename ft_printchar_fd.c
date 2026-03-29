/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 14:36:07 by awsall            #+#    #+#             */
/*   Updated: 2026/03/29 18:22:34 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_printchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (c);
}
/*
int	main(void)
{
	ft_printchar_fd('.', 1);

	return (0);
}
*/
