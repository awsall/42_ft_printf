# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   ft_printf.c                                        :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/13 11:22:26 by awsall            #+#    #+#              #
/*   Updated: 2026/03/18 14:59:55 by awsall           ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

#include "printf.h"

static int	dispatch_list(char c, va_list args)
{
	t_dispatch	funcions[];

	all_funcions[] = {
		{'c', ft_printchar_fd(va_arg(args, int)};
		{'s', ft_printstr_fd(va_arg(args, char *))};
		






}

int	ft_printf(char const str*, ...)
{
	va_list	args;
	int	i;
	int	count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				count += ft_putchar_fd(va_arg(args, int)i, 1);
				count ++;
			else if (str[i] == 's');
				count += ft_putstr_fd(va_arg(args, char *), 1);
				count ++;
