/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <lgrisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:03:05 by lgrisel           #+#    #+#             */
/*   Updated: 2025/06/11 18:55:14 by lgrisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int	replace_occurence_in_file(char **av, std::string str)
{
	std::ofstream	outfile((std::string(av[1]) + ".replace").c_str());
	int				pos;
	
	if (outfile.fail())
		return (std::cout << "Error : couldn't create .replace file" << std::endl, 1);
	for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(av[2], i);
		if (pos != -1 && pos == i)
		{
			outfile << av[3];
			i += std::string(av[2]).size() - 1;
		}
		else
			outfile << str[i];
	}
	outfile.close();
	return (0);
}

int	main(int ac, char **av)
{
	char			c;
	std::ifstream	infile(av[1]);
	std::string		str;

	if (ac != 4)
		return (std::cout << "\e[36mUsage: ./sed <file> <occurrence> <replacement>\e[0m" << std::endl, 1);
	if (infile.fail())
		return (std::cout << "Error :" << av[1] << ": no such file or directory" << std::endl, 1);
	while (!infile.eof() && infile >> std::noskipws >> c)
		str += c;
	infile.close();
	return (replace_occurence_in_file(av, str));
}
