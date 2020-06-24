/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:40:23 by msibiya           #+#    #+#             */
/*   Updated: 2020/06/24 10:49:12 by msibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if(power < 0 )
	{
		return 0;
	}

	else if(power == 0)
	{
		return 1;
	}

	else
	{
		return nb*ft_recursive_power(nb,(power-1));
	}

}

//int main()
//{
//	printf("%d\n", ft_recursive_power(2,4));
//	return 0;
//

