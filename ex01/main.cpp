/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:18:43 by numartin          #+#    #+#             */
/*   Updated: 2023/09/21 15:11:57 by numartin         ###   ########.fr       */
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
	PhoneBook phonebook;
	std::string cmd;

	while(1) {
		print_main_header();
		std::cout << "> ";
		std::getline(std::cin, cmd);

		if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.search();
		else if (cmd == "EXIT")
			break;
		else {
			std::cout << "Error: '" << cmd << "' is not a valid command. Press any key to continue ...";
			std::cin.get();
		}
	}

	return 0;
}