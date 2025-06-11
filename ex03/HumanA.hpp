/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:18:03 by lgrisel           #+#    #+#             */
/*   Updated: 2025/06/11 16:46:03 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

class HumanA
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA();

		void	attack();
};

#endif