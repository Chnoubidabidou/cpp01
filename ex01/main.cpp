/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:26:03 by lgrisel           #+#    #+#             */
/*   Updated: 2025/06/11 15:47:17 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *horde;
	int Zcount = 5;
	int i = 0;

	horde = zombieHorde(Zcount, "MJs");
	if (!horde)
		return (1);
	while (i < Zcount)
	{
		horde[i].announce();
		i++;
	}
	delete[] (horde);
	return (0);
}
