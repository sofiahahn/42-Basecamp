/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahn <shahn@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 03:26:47 by shahn             #+#    #+#             */
/*   Updated: 2022/02/17 06:23:41 by shahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra;
	int		i;

	i = 97;
	while (i <= 122)
	{
		letra = i;
		write (1, &letra, 1);
		i++;
	}
}
