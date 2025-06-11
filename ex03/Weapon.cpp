/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:18:07 by lgrisel           #+#    #+#             */
/*   Updated: 2025/06/11 17:41:59 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	this->weapon = weapon;
}

Weapon::~Weapon()
{
}

std::string	Weapon::getType()
{
	return (weapon);
}
void	Weapon::setType(std::string type)
{
	weapon = type;
}
