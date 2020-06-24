/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 08:12:26 by msibiya           #+#    #+#             */
/*   Updated: 2020/06/24 08:25:59 by msibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factoral(int nb)
{
	int i;
	int factor;
	factor = nb;
	if(nb == 0 || nb == 1)
		return 1;
	return (factor*ft_recursive_factoral(factor - 1));
}

//int main()
//{
//	int b;
//	b=ft_recursive_factoral(5);
//	printf("factor of 5 is: %d", b);
//
