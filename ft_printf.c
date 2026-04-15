/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:53:56 by awsall            #+#    #+#             */
/*   Updated: 2026/04/07 19:41:05 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_formats(va_list args, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (format == 's')
		count += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		count += ft_print_ptr(va_arg(args, void *));
	else if (format == 'u')
		count += ft_printnbr_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		count += ft_printhexa_base(va_arg(args, unsigned int),
				"0123456789abcdef");
	else if (format == 'X')
		count += ft_printhexa_base(va_arg(args, unsigned int),
				"0123456789ABCDEF");
	else if (format == 'd' || format == 'i')
		count += ft_print_int(va_arg(args, int));
	else if (format == '%')
		count += ft_print_percent();
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
			count += ft_formats(args, str[++i]);
		else
		{
			write(1, &str[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
/*
#include <stdio.h>
int main (void)
{
	int count;
	
	count = 0;
	printf ("**** PRINTF ****\n");
	count = printf ("%s\n", NULL);
	printf ("%d\n", count);
	printf ("**** FT_PRINTF ****\n");
	count = ft_printf("%s\n", NULL);
	printf ("%d\n\n", count);
	
	printf ("**** PRINTF ****\n");
	count = printf ("%d\n", 12213);
	printf ("%d\n", count);
	printf ("**** FT_PRINTF ****\n");
	count = ft_printf("%d\n", 12213);
	printf ("%d\n\n", count);
	
	printf ("**** PRINTF ****\n");
	count = printf ("%i\n", 12213);
	printf ("%d\n", count);
	printf ("**** FT_PRINTF ****\n");
	count = ft_printf("%i\n", 12213);
	printf ("%d\n\n", count);
	
	printf ("**** PRINTF ****\n");
	count = printf ("%u\n", 12213);
	printf ("%d\n", count);
	printf ("**** FT_PRINTF ****\n");
	count = ft_printf("%u\n", 12213);
	printf ("%d\n\n", count);
	
	printf ("**** PRINTF ****\n");
	count = printf ("%x\n", 12213);
	printf ("%d\n", count);
	printf ("**** FT_PRINTF ****\n");
	count = ft_printf("%x\n", 12213);
	printf ("%d\n\n", count);
	
	printf ("**** PRINTF ****\n");
	count = printf ("%X\n", 12213);
	printf ("%d\n", count);
	printf ("**** FT_PRINTF ****\n");
	count = ft_printf("%X\n", 12213);
	printf ("%d\n\n", count);
	
	printf ("**** PRINTF ****\n");
	count = printf ("hol%c\n", 'a');
	printf ("%d\n", count);
	printf ("**** FT_PRINTF ****\n");
	count = ft_printf("hol%c\n", 'a');
	printf ("%d\n\n", count);
	
	printf ("**** PRINTF ****\n");
	count = printf ("hola %s\n", "mundo");
	printf ("%d\n", count);
	printf ("**** FT_PRINTF ****\n");
	count = ft_printf("hola %s\n", "mundo");
	printf ("%d\n\n", count);
	
	printf ("**** PRINTF ****\n");
	count = printf ("%p\n", &count);
	printf ("%d\n", count);
	printf ("**** FT_PRINTF ****\n");
	count = ft_printf("%p\n", &count);
	printf ("%d\n\n", count);
	
	printf ("**** PRINTF ****\n");
	count = printf ("%%\n");
	printf ("%d\n", count);
	printf ("**** FT_PRINTF ****\n");
	count = ft_printf("%%\n");
	printf ("%d\n\n", count);
	return (0);
}*/
