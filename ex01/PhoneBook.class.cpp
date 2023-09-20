/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:54:32 by numartin          #+#    #+#             */
/*   Updated: 2023/09/20 17:35:51 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include "phonebook.hpp"

PhoneBook::PhoneBook( void ) {}
PhoneBook::~PhoneBook( void ) {}

/* void    input_field(const std::string field_name, Contact &instance, std::string (Contact::*get)( void ) const, int (Contact::*set)(std::string)) {
    while((instance.*get)() == "")
    {
        std::string input;
        std::cout << "\t\t[" << field_name << "]: ";
        std::getline(std::cin, input);
        if ((instance.*set)(input) != 0)
            std::cout << "\t\t\tError: " << field_name  << " is required" << std::endl;
    }
}

input_field("First Name", newContact, &Contact::getFirstName, &Contact::setFirstName); */


void PhoneBook::add( void ) {
    Contact newContact;

    print_add_header();

    while(newContact.getFirstName() == "")
    {
        std::string firstName;
        std::cout << "\t\t[First Name]: ";
        std::getline(std::cin, firstName);
        if (newContact.setFirstName(firstName) != 0)
            std::cout << "\t\t\tError: First name is required" << std::endl;
    }

    while(newContact.getLastName() == "")
    {
        std::string lastName;
        std::cout << "\t\t[Last Name]: ";
        std::getline(std::cin, lastName);
        if (newContact.setLastName(lastName) != 0)
            std::cout << "\t\t\tError: Last name is required" << std::endl;
    }

    while(newContact.getNickName() == "")
    {
        std::string nickName;
        std::cout << "\t\t[Nickname]: ";
        std::getline(std::cin, nickName);
        if (newContact.setNickName(nickName) != 0)
            std::cout << "\t\t\tError: Nickname is required" << std::endl;
    }

    while(newContact.getPhoneNumber() == "")
    {
        std::string phoneNumber;
        std::cout << "\t\t[Phone Number]: ";
        std::getline(std::cin, phoneNumber);
        if (newContact.setPhoneNumber(phoneNumber) != 0)
            std::cout << "\t\t\tError: Phone number is required and must be valid" << std::endl;
    }

    while(newContact.getSecret() == "")
    {
        std::string darkestSecret;
        std::cout << "\t\t[Darkest Secret]: ";
        std::getline(std::cin, darkestSecret);
        if (newContact.setSecret(darkestSecret) != 0)
            std::cout << "\t\t\tError: Darkest secret is required" << std::endl;
    }
 
    // TODO handle insertion when contact list is full
    this->contacts[0] = &newContact;

}

Contact * PhoneBook::showInfo( int index ) const {
    // TODO get contact info or display error message
    (void) index;
    return NULL;
}