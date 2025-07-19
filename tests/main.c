/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelaih <hbelaih@student.42.amman>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:19:52 by hbelaih           #+#    #+#             */
/*   Updated: 2025/07/19 15:35:37 by hbelaih          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/include/libunit.h"
#include "lib/lib_tests.h"
#include "split_test/splitTest.h"

int	main(void)
{
	launcher_lib(ft_split);
	launcher_split(ft_split);
	return (0);
}
