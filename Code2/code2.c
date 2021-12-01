/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:53:02 by jwilliam          #+#    #+#             */
/*   Updated: 2021/12/01 11:19:41 by lta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

/*
 * looks like a fibonacci function to me
 */

void	test_code_2(void)
{
	int		iter;
	char	num;

	iter = 0;
	while (iter < 10)
	{
		num = iter + '0';
		write(1, &num, 1);
		write(1, "\n", 1);
		iter++;
	}
}

int	main(void)
{
	test_code_2();
}
