
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 16:14:14 by maparmar          #+#    #+#             */
/*   Updated: 2019/03/09 16:39:34 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;

		i = 0;
		while(argv[1][i])
			i += 1;
		while(i)
			write(1, &argv[1][--i], 1);
	}
	write(1 ,"\n", 1);
	return (0);
}