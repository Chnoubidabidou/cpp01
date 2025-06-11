/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:26:10 by lgrisel           #+#    #+#             */
/*   Updated: 2025/06/11 15:46:43 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 2)
	{
		std::cout << "A Horde cannot be less than 2 zombies" << std::endl;
		return (NULL);
	}
	Zombie *horde = new Zombie[N];
	if (!horde)
	{
		std::cout << "Allocation failed" << std::endl;
		return (NULL);
	}
	int i = 0;
	while (i < N)
	{
		horde[i].set_name(name);
		i++;
	}
	return (horde);
}
