/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:23:23 by jwilliam          #+#    #+#             */
/*   Updated: 2021/12/01 12:16:00 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * cool comments here - lees
 */

#include	<unistd.h>

void	test_code_1(void)
{
	char	letter;
	int		iter;

	letter = 'a';
	iter = 0;
	while (iter < 5)
	{
		write(1, &letter, 1);
		letter++;
		iter++;
		write(1, "\n", 1);
	}
}

int	main(void)
{
	test_code_1();
}
