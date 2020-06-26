/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factoral.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 12:50:50 by msibiya           #+#    #+#             */
/*   Updated: 2020/06/25 12:36:42 by msibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i;
	int factor;
	factor = nb;
	i = 1;
	if (nb == 0 || nb == 1)
		return 1;
	while(i < nb)
	{
		factor = factor*i;
		i++;

	}
	
	return factor;


}
 int main()
{
int b;
	b=ft_iterative_factorial(5);
	printf("factor of 5 is: %d", b);
	return 0;
}
