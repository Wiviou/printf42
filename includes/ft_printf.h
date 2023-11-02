/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkeiser <wkeiser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:29:12 by wkeiser           #+#    #+#             */
/*   Updated: 2023/10/23 14:38:26 by wkeiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.h"

int		ft_printf(const char *format, ...);
void	ft_display_printf(const char *ptr, int *count);
void	ft_check_situation(const char **ptr, int *count, va_list args);
void	ft_string_printf(const char *str, int *count);
void	ft_char_printf(int c, int *count);
void	ft_integer_printf(int args, int *count);
void	ft_unsigned_printf(unsigned int args, int *count);
void	ft_hexa_printf(unsigned int args, int *count, char speci);
void	ft_pointer_printf(void *args, int *count);
char	*ft_unsigned_itoa(unsigned int n);

#endif
