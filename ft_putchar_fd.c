/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:05:21 by maheleni          #+#    #+#             */
/*   Updated: 2025/07/21 11:56:22 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* Outputs the character ’c’ to the given file descriptor
* @param c character to output
* @param fd filedescriptor of where to output
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}
