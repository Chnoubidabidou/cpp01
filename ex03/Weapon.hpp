/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:18:08 by lgrisel           #+#    #+#             */
/*   Updated: 2025/06/11 17:41:30 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Weapon
{
	private:
		std::string weapon;
	public:
		Weapon(std::string weapon);
		~Weapon();

		std::string	getType();
		void		setType(std::string type);
};

#endif