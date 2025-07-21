/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maheleni <maheleni@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:10:38 by maheleni          #+#    #+#             */
/*   Updated: 2025/07/21 12:11:47 by maheleni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* Applies the function ’f’ to each character of the string ’s’
* @param s string to apply f to
* @param f a function to apply to every character in string s.
*		Parameters:
*			unsigned int - index of the character in s
*			char * - address of that character
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
