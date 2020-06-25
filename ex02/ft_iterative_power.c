/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 08:37:10 by msibiya           #+#    #+#             */
/*   Updated: 2020/06/24 09:35:15 by msibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int a;
	a = 1;
	power = nb;
	if ( power < 0 || power == 0 || nb == 0 || nb == 1)
		return 1;
	while (power > 0)
	{
		a = a*nb;
		power--;
	}
	return a;
}

int main()
{
	int o, r;
	o = 3;
	r = ft_iterative_power(o,r);
	printf("%d",r);
	return 0;
}

