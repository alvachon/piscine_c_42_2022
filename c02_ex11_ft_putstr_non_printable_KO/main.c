/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:15:30 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/13 14:09:47 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char a[120] = "Coucou\ntu vas bien ?\r add \t";

	printf("\nString a: %s\n", a);

	ft_putstr_non_printable(a);
}
