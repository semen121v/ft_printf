/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fshade <fshade@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:03:07 by eschoen           #+#    #+#             */
/*   Updated: 2019/05/17 22:27:06 by fshade           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <limits.h>
//#include "./includes/ft_printf.h"

int		main(void)
{
	
    int a;
	char *str;
	int	*c;
	double b;
	int i;

	a = 0;
	c = &a;
	i = 0;
	b = 335.948;
	a = printf("{%f}{%F}", -1.4322, -1.4322);
	printf("\n%d\n", a);
	a = ft_printf("{%f}{%F}", -1.4322, -1.4322);
	printf("\n%d", a);
	return (0);
}
