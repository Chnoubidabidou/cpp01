/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:18:01 by lgrisel           #+#    #+#             */
/*   Updated: 2025/06/11 17:56:05 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl; 
}
