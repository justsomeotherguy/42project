/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:38:22 by jwilliam          #+#    #+#             */
/*   Updated: 2021/11/16 15:42:31 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * this comment was added from the github site - lees
 */

#include	<unistd.h>
#include	<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		multi;
	int		result;

	multi = 1;
	result = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	while (multi <= nb)
	{
		result = result * multi;
		multi++;
	}
	return (result);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(8));
}
