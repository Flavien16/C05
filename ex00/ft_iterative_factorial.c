/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:16:35 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/18 14:45:04 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb)
	{
		if (nb < 0)
			return (0);
		result *= nb--;
	}
	return (result);
}

/*int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
	return (0);
}*/
