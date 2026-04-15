/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 18:52:09 by awsall            #+#    #+#             */
/*   Updated: 2026/04/07 17:19:11 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_print_char(char c);
int		ft_print_str(char *s);
int		ft_print_int(int nbr);
int		ft_print_percent(void);
int		ft_print_ptr(void *ptr);
int		ft_printhexa_base(unsigned long n, const char *base);
int		ft_printnbr_unsigned(unsigned int n);

#endif
