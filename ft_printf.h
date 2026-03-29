/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awsall <awsall@student.42urduliz.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:53:21 by awsall            #+#    #+#             */
/*   Updated: 2026/03/11 14:59:22 by awsall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

/*typedef struct s_dispatch {
    char            specifier;
    t_dispatch_func func;
} t_dispatch;*/


int	ft_printchar_fd(char c, int fd);
int	ft_printstr(char *s);








#endif
