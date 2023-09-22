/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_headers.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:59:08 by numartin          #+#    #+#             */
/*   Updated: 2023/09/22 16:00:49 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

void	print_main_header(void) {
	system("clear");
	
	std::cout << std::endl;
	
	std::cout << "██████╗░██╗░░██╗░█████╗░███╗░░██╗███████╗██████╗░░█████╗░░█████╗░██╗░░██╗" << std::endl;
	std::cout << "██╔══██╗██║░░██║██╔══██╗████╗░██║██╔════╝██╔══██╗██╔══██╗██╔══██╗██║░██╔╝" << std::endl;
	std::cout << "██████╔╝███████║██║░░██║██╔██╗██║█████╗░░██████╦╝██║░░██║██║░░██║█████═╝░" << std::endl;
	std::cout << "██╔═══╝░██╔══██║██║░░██║██║╚████║██╔══╝░░██╔══██╗██║░░██║██║░░██║██╔═██╗░" << std::endl;
	std::cout << "██║░░░░░██║░░██║╚█████╔╝██║░╚███║███████╗██████╦╝╚█████╔╝╚█████╔╝██║░╚██╗" << std::endl;
	std::cout << "╚═╝░░░░░╚═╝░░╚═╝░╚════╝░╚═╝░░╚══╝╚══════╝╚═════╝░░╚════╝░░╚════╝░╚═╝░░╚═╝" << std::endl;

	std::cout << std::endl;

	std::cout << "*************************************************************************" << std::endl;
	std::cout << "*                                                                       *" << std::endl;
	std::cout << "*                Welcome to your favorite phone book                    *" << std::endl;
	std::cout << "*                                                                       *" << std::endl;
	std::cout << "*************************************************************************" << std::endl;

	std::cout << std::endl; 
	
	std::cout << "Type one of the commands bellow:" << std::endl << std::endl;
	std::cout << "\t[ADD] - Adds a new contact entry" << std::endl;
	std::cout << "\t[SEARCH] - Search for contacts" << std::endl;
	std::cout << "\t[EXIT] - Exits the program" << std::endl << std::endl;
}

void    print_add_header( void ) {
	system("clear");
	
	std::cout << std::endl;

	std::cout << "░█▀▀█ █▀▀▄ █▀▀▄ " << std::endl;
	std::cout << "▒█▄▄█ █░░█ █░░█ " << std::endl;
	std::cout << "▒█░▒█ ▀▀▀░ ▀▀▀░" << std::endl;

	std::cout << std::endl;

	std::cout << "-- New Contact Entry (All fields are required) --" << std::endl << std::endl;
}

void    print_search_header( void ) {
	system("clear");
	
	std::cout << std::endl;

	std::cout << "▒█▀▀▀█ █▀▀ █▀▀█ █▀▀█ █▀▀ █░░█ " << std::endl;
	std::cout << "░▀▀▀▄▄ █▀▀ █▄▄█ █▄▄▀ █░░ █▀▀█ " << std::endl;
	std::cout << "▒█▄▄▄█ ▀▀▀ ▀░░▀ ▀░▀▀ ▀▀▀ ▀░░▀" << std::endl;

	std::cout << std::endl;
}