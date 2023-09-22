/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:54:32 by numartin          #+#    #+#             */
/*   Updated: 2023/09/22 16:41:55 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string> 
#include <stdlib.h>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include "phonebook.hpp"

PhoneBook::PhoneBook( void ) : counter(-1) {}
PhoneBook::~PhoneBook( void ) {}

// void    input_field(const std::string field_name, Contact &instance, std::string (Contact::*get)( void ) const, int (Contact::*set)(std::string)) {
//     while((instance.*get)() == "")
//     {
//         std::string input;
//         std::cout << "\t\t[" << field_name << "]: ";
//         std::getline(std::cin, input);
//         if ((instance.*set)(input) != 0)
//             std::cout << "\t\t\tError: " << field_name  << " is required" << std::endl;
//     }
// }

// input_field("First Name", newContact, &Contact::getFirstName, &Contact::setFirstName);


void PhoneBook::add( void ) {
    print_add_header();

    this->counter++;
    
    int index = this->counter % (MAX_CONTACTS);

    if (counter >= MAX_CONTACTS) {
        std::cout << std::endl;
        std::cout << "Phonebook is full! Overwritting " << this->contacts[index].getFirstName() << "'s contact." << std::endl;
        std::cout << std::endl;
        this->contacts[index] = Contact();
    }

    Contact *newContact = &this->contacts[index];

    while(newContact->getFirstName() == "")
    {
        std::string firstName;
        std::cout << "\t\t[First Name]: ";
        std::getline(std::cin, firstName);
        if (newContact->setFirstName(firstName) != 0)
            std::cout << "\t\t\tError: First name is required" << std::endl;
    }

    while(newContact->getLastName() == "")
    {
        std::string lastName;
        std::cout << "\t\t[Last Name]: ";
        std::getline(std::cin, lastName);
        if (newContact->setLastName(lastName) != 0)
            std::cout << "\t\t\tError: Last name is required" << std::endl;
    }

    while(newContact->getNickName() == "")
    {
        std::string nickName;
        std::cout << "\t\t[Nickname]: ";
        std::getline(std::cin, nickName);
        if (newContact->setNickName(nickName) != 0)
            std::cout << "\t\t\tError: Nickname is required" << std::endl;
    }

    while(newContact->getPhoneNumber() == "")
    {
        std::string phoneNumber;
        std::cout << "\t\t[Phone Number]: ";
        std::getline(std::cin, phoneNumber);
        if (newContact->setPhoneNumber(phoneNumber) != 0)
            std::cout << "\t\t\tError: Phone number is required and must be valid" << std::endl;
    }

    while(newContact->getSecret() == "")
    {
        std::string darkestSecret;
        std::cout << "\t\t[Darkest Secret]: ";
        std::getline(std::cin, darkestSecret);
        if (newContact->setSecret(darkestSecret) != 0)
            std::cout << "\t\t\tError: Darkest secret is required" << std::endl;
    }
}

void    PhoneBook::printContactRow(int index) const {
    if ((index >= 0 && index < MAX_CONTACTS) && this->contacts[index].getFirstName() != "") {
        std::cout   << "|" << std::setw(10) << index
                    << "|" << std::setw(10) << format_cell(this->contacts[index].getFirstName())
                    << "|" << std::setw(10) << format_cell(this->contacts[index].getLastName())
                    << "|" << std::setw(10) << format_cell(this->contacts[index].getNickName())
                    << "|" << std::endl;
        std::cout << "*-------------------------------------------*" << std::endl;

    }
}

void    PhoneBook::showContactTable( void ) const {
    std::cout << "*-------------------------------------------*" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "*-------------------------------------------*" << std::endl;

    if (this->contacts[0].getFirstName() == "") {
        std::cout << "*                                           *" << std::endl;
        std::cout << "*             Empty Contact List            *" << std::endl;
        std::cout << "*                                           *" << std::endl;
        std::cout << "*-------------------------------------------*" << std::endl;
    } else {
        for(int i = 0; i <= this->counter; i++)
            printContactRow(i);
    }

    // Show phonebook used memory (ex [2/8])
    std::cout << "[";
    if ( this->counter < MAX_CONTACTS)
        std::cout << this->counter + 1;
    else
        std::cout << MAX_CONTACTS;
    std::cout << "/" << MAX_CONTACTS << "]" << std::endl;
}

void    PhoneBook::search( void ) const {
    print_search_header();
    showContactTable();
    
    std::cout << std::endl;

    if(this->counter < 0)
        return press_enter_to_continue();

    std::string input;
    while (!(input.length() && isdigit(input[0]) && ft_stoi(input) < ft_min(MAX_CONTACTS, this->counter + 1))) {
        std::cout << "Enter index to show contact info: ";
	    std::getline(std::cin, input);
        if (!(input.length() && isdigit(input[0]) && ft_stoi(input) < ft_min(MAX_CONTACTS, this->counter + 1)))
            std::cout << "Error: invalid index, try again." << std::endl;
    }

    showContactInfo(ft_stoi(input));
}

void PhoneBook::showContactInfo( int index ) const {
    std::cout << std::endl;
    
    std::cout << "\t[First Name]: " << this->contacts[index].getFirstName() << std::endl;
    std::cout << "\t[Last Name]: " << this->contacts[index].getLastName() << std::endl;
    std::cout << "\t[Nickname]: " << this->contacts[index].getNickName() << std::endl;
    std::cout << "\t[Phone Number]: " << this->contacts[index].getPhoneNumber() << std::endl;
    std::cout << "\t[Darkest Secret]: " << this->contacts[index].getSecret() << std::endl;

    press_enter_to_continue();
}