/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:52:38 by maheleni          #+#    #+#             */
/*   Updated: 2024/04/24 12:52:40 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

void	*ft_memset(void *s, int c, size_t len);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_islower(int c);
int	ft_isupper(int c);
size_t	ft_strlen(const char *s);

#endif