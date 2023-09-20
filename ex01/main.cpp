/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:18:43 by numartin          #+#    #+#             */
/*   Updated: 2023/09/20 12:04:18 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
#include "phonebook.hpp"

// std::cout << "Press any key to continue ...";
// std::cin.get();

int main( void ) {
	std::string cmd;
	PhoneBook phonebook;

	phonebook.add();

	while(1) {
		print_main_header();
		std::cout << "> ";
		std::getline(std::cin, cmd);

		if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			std::cout << "m search" << std::endl;
		else if (cmd == "EXIT")
			std::cout << "m exit" << std::endl;
		else {
			std::cout << "Error: '" << cmd << "' is not a valid command. Press any key to continue ...";
			std::cin.get();
		}
	}

	return 0;
}