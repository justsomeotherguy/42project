/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:53:02 by jwilliam          #+#    #+#             */
/*   Updated: 2021/11/16 15:25:50 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

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
