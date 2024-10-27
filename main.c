/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:59:12 by mchetoui          #+#    #+#             */
/*   Updated: 2024/10/25 02:28:25 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <limits.h>

int main(int ac, char **av)
{
	printf("orig : %d\ndialk: %d\n", atoi(av[1]), ft_atoi(av[1]));
}
